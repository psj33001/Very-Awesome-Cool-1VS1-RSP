using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using TMPro;

public class Space : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    public Manager manager;
    TextMeshProUGUI textMesh;

    void Start()
    {
        textMesh = GetComponent<TextMeshProUGUI>();
    }

    void Update()
    {
        if(manager.touchMod) {textMesh.text = "Touch to Start";}
        else {textMesh.text = "SPACE to Start";}

        if(Input.GetKeyDown(KeyCode.Space)) {transform.localScale = new Vector2(0.8f,0.8f);}
        if(Input.GetKeyUp(KeyCode.Space)) {
            transform.localScale = new Vector2(1f,1f);
            manager.GameStart();
            gameObject.SetActive(false);
        }
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        transform.localScale = new Vector2(0.8f,0.8f);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        transform.localScale = new Vector2(1f,1f);
        manager.GameStart();
        gameObject.SetActive(false);
    }
}
