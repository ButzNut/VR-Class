using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Marker : MonoBehaviour
{
    [SerializeField] private Transform _tip;
    [SerializeField] private int _penSize = 5;

    private Renderer _renderer;
    private Color[] _colors;
    public Color chosenColor;
    private float _tipHeight;

    private RaycastHit _touch;
    private Whiteboard _whiteboard;
    private Vector2 _touchPos, _lastTouchPos;
    private bool _touchedLastFrame;
    private Quaternion _lastTouchRot;

    public List<Material> Materials;
    public MeshRenderer meshRenderer;
    public bool drawEnabled;

    // Start is called before the first frame update
    void Start()
    {
        _renderer = _tip.GetComponent<Renderer>();
        _colors = Enumerable.Repeat(chosenColor, _penSize * _penSize).ToArray();
        _tipHeight = _tip.localScale.y;
        MeshRenderer meshRenderer = GetComponent<MeshRenderer>();
        Material oldMaterial = meshRenderer.material;
        Debug.Log("Applied Material: " + oldMaterial.name);
        meshRenderer.material = Materials[0];
    }

    public void ChangeDrawMode()
    {
        drawEnabled = !drawEnabled;
    }

    // Update is called once per frame
    void Update()
    {
        if (drawEnabled)
        {
            _renderer.material.color = chosenColor;
            Draw();
        }
        else
        {
            _renderer.material.color = Color.white;
        }
    }

    private void Draw()
    {
        // if (Physics.Raycast(_tip.position, transform.up, out _touch, _tipHeight))
        // {
        //     if (_touch.transform.CompareTag("Whiteboard"))
        //     {
        //         meshRenderer.material = Materials[1];
        //         if (_whiteboard == null)
        //         {
        //             _whiteboard = _touch.transform.GetComponent<Whiteboard>();
        //         }
        //
        //         _touchPos = new Vector2(_touch.textureCoord.x, _touch.textureCoord.y);
        //
        //         var x = (int)(_touchPos.x * _whiteboard.textureSize.x - (_penSize / 2));
        //         var y = (int)(_touchPos.y * _whiteboard.textureSize.y - (_penSize / 2));
        //
        //         if (y < 0 || y > _whiteboard.textureSize.y || x < 0 || x > _whiteboard.textureSize.x) return;
        //
        //         if (_touchedLastFrame)
        //         {
        //             _whiteboard.texture.SetPixels(x, y, _penSize, _penSize, _colors);
        //
        //             for (float f = 0.01f; f < 1.00f; f += 0.01f)
        //             {
        //                 var _lerpX = (int)Mathf.Lerp(_lastTouchPos.x, x, f);
        //                 var _lerpY = (int)Mathf.Lerp(_lastTouchPos.y, y, f);
        //                 _whiteboard.texture.SetPixels(_lerpX, _lerpY, _penSize, _penSize, _colors);
        //             }
        //
        //             // lock the pen's rotation when it is pushing the whiteboard
        //             transform.rotation = _lastTouchRot;
        //
        //             _whiteboard.texture.Apply();
        //         }
        //
        //         _lastTouchPos = new Vector2(x, y);
        //         _lastTouchRot = transform.rotation;
        //         _touchedLastFrame = true;
        //         return;
        //     }
        // }
        
        if (Physics.SphereCast(_tip.position, _tip.transform.localScale.magnitude, transform.up,out _touch, _tipHeight))
        {
            if (_touch.transform.CompareTag("Whiteboard"))
            {
                meshRenderer.material = Materials[1];
                if (_whiteboard == null)
                {
                    _whiteboard = _touch.transform.GetComponent<Whiteboard>();
                }

                _touchPos = new Vector2(_touch.textureCoord.x, _touch.textureCoord.y);

                var x = (int)(_touchPos.x * _whiteboard.textureSize.x - (_penSize / 2));
                var y = (int)(_touchPos.y * _whiteboard.textureSize.y - (_penSize / 2));

                if (y < 0 || y > _whiteboard.textureSize.y || x < 0 || x > _whiteboard.textureSize.x) return;

                if (_touchedLastFrame)
                {
                    _whiteboard.texture.SetPixels(x, y, _penSize, _penSize, _colors);

                    for (float f = 0.01f; f < 1.00f; f += 0.01f)
                    {
                        var _lerpX = (int)Mathf.Lerp(_lastTouchPos.x, x, f);
                        var _lerpY = (int)Mathf.Lerp(_lastTouchPos.y, y, f);
                        _whiteboard.texture.SetPixels(_lerpX, _lerpY, _penSize, _penSize, _colors);
                    }
                    
                    _whiteboard.texture.Apply();
                }

                _lastTouchPos = new Vector2(x, y);
                _lastTouchRot = transform.rotation;
                _touchedLastFrame = true;
                return;
            }
        }
        else
        {
            meshRenderer.material = Materials[0];
            _whiteboard = null;
            _touchedLastFrame = false;
        }
    }
}