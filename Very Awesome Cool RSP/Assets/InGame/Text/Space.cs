using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Space : MonoBehaviour
{
    public Manager manager;

    void Update()
    {
        if(Input.GetKey(KeyCode.Space)) {transform.localScale = new Vector2(0.8f,0.8f);}
        else {transform.localScale = new Vector2(1f,1f);}
        if(manager.gameStarted == true) {gameObject.SetActive(false);}
    }
}
