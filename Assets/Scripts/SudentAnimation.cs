using System.Collections;
using System.Collections.Generic;
using Animancer;
using UnityEngine;

public class SudentAnimation : MonoBehaviour
{
    private AnimancerComponent _animancer;
    public ClipTransition idleSitting, askingQuestion;

    [SerializeField] private float _randomNum;
    // Start is called before the first frame update
    void Start()
    {
        _animancer = GetComponent<AnimancerComponent>();
        _randomNum = 1;
        idleSitting.Speed = Random.Range(0.5f, 1f);
        _animancer.Play(idleSitting);
        InvokeRepeating("RandomAnim", 0, 5);
    }


    public void RandomAnim()
    {
        _randomNum = Random.Range(0, 10);
        if (_randomNum == 0)
        {
            _animancer.Play(askingQuestion);
            askingQuestion.Speed = Random.Range(0.8f, 1.2f);
        }
        else
        {
            _animancer.Play(idleSitting);
            idleSitting.Speed = Random.Range(0.5f, 1f);
        }
    }
}
