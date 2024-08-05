using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectManager : MonoBehaviour
{
    public GameObject[] effect;
    public GameObject[] effectSquare_prefab;

    public Vector3 position;
    float timer;

    public bool effect2_switch;

    public void Effect1()
    {
        foreach(Transform child in effect[0].transform) {Destroy(child.gameObject);}
        for(int i = 0; i < 20; i++) {
            GameObject effectSquare1 = Instantiate(effectSquare_prefab[0], effect[0].transform);
            effectSquare1.transform.position = position;
        }
    }

    public void Effect2()
    {
        GameObject effectSquare2 = Instantiate(effectSquare_prefab[1], effect[1].transform);
        effectSquare2.transform.position = position;
    }

    public void Effect2_Reset()
    {
        foreach(Transform child in effect[1].transform) {Destroy(child.gameObject);}
    }

    void Update()
    {
        if(effect2_switch) {
            if(timer >= 0.1f) {
                position = new Vector3(Random.Range(-18f, 18f), Random.Range(-10f, 10f), 0);
                Effect2();
                timer = 0;
            }
            else {timer += Time.deltaTime;}
        }
        else {timer = 0;}
    }
}
