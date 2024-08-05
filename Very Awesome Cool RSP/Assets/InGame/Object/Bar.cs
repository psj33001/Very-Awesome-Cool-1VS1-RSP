using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bar : MonoBehaviour
{
    Manager manager;
    LineRenderer lineRenderer;

    public float one;
    public float two;


    void Awake()
    {
        manager = GameObject.FindWithTag("manager").GetComponent<Manager>();
        lineRenderer = GetComponent<LineRenderer>();
    }

    void Update()
    {
        one = (float)(manager.p1winningTime-manager.p2winningTime);
        two = manager.gameTime;

        if(manager.gameState == "game!!!")
        {
            lineRenderer.SetPosition(0, new Vector3(0.0f, -20.0f, 0.0f));
            lineRenderer.SetPosition(1, new Vector3((float)(manager.p2winningTime-manager.p1winningTime)/manager.gameTime*300, -20.0f, 0.0f));
            if(manager.totalWinner == 1) {
                lineRenderer.startColor = new Color(0.8f, 0.2f, 0.2f, 1f);
                lineRenderer.endColor = new Color(0.8f, 0.2f, 0.2f, 1f);
            }
            else if(manager.totalWinner == 2) {
                lineRenderer.startColor = new Color(0.2f, 0.2f, 0.8f, 1f);
                lineRenderer.endColor = new Color(0.2f, 0.2f, 0.8f, 1f);
            }
        }
    }
}
