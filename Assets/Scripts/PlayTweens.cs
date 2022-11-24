using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class PlayTweens : MonoBehaviour
{
    bool wallsUp = true;

    public void WallDown()
    {
        if (wallsUp)
        {
            DOTween.RestartAll();
            wallsUp = false;
        }
    }

    public void WallUp()
    {
        if (!wallsUp)
        {
            DOTween.SmoothRewindAll();
            wallsUp = true;
        }
    }
}