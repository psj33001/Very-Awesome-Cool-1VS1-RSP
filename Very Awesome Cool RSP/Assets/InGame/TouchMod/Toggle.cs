using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using TMPro;

public class Toggle : MonoBehaviour, IPointerDownHandler
{
    Manager manager;
    TextMeshProUGUI textMesh;
    Material mat;

    public GameObject backobject;

    void Start()
    {
        manager = GameObject.Find("Manager").GetComponent<Manager>();
        textMesh = GetComponent<TextMeshProUGUI>();
        mat = textMesh.fontMaterial;
    }

    void Update()
    {
        if(manager.gameState == "notStarted" || manager.gameState == "getEnded") {
            backobject.SetActive(true);
            if(manager.touchMod) {
                textMesh.text = "Touch Mode: ON";
                mat.color = new Color(1f, 1f, 0f, 1f);
            }
            else {
                textMesh.text = "Touch Mode: OFF";
                mat.color = new Color(1f, 1f, 1f, 1f);
            }
            mat.SetColor(ShaderUtilities.ID_FaceColor, mat.color);
        }
        else {
            backobject.SetActive(false);
            gameObject.SetActive(false);
        }
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if(manager.touchMod) {manager.touchMod = false;}
        else {manager.touchMod = true;}
    }
}
