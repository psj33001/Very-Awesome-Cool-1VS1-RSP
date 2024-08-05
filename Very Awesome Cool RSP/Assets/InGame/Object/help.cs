using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using TMPro;

public class help : MonoBehaviour, IPointerDownHandler
{
    Manager manager;
    TextMeshProUGUI textMesh;
    Material mat;

    public GameObject backobject;
    public GameObject[] guide;

    public float timer;

    void Start()
    {
        manager = GameObject.Find("Manager").GetComponent<Manager>();
        textMesh = GetComponent<TextMeshProUGUI>();
        mat = textMesh.fontMaterial;

        if(manager.help) foreach(GameObject g in guide) {g.SetActive(true);}
        else foreach(GameObject g in guide) {g.SetActive(false);}
    }

    void Update()
    {
        if(manager.gameState == "notStarted" || manager.gameState == "getEnded") {
            timer += Time.deltaTime;
            Vector3 rotation = new Vector3(0f, 0f, 20f*Mathf.Sin(timer*1.5f));
            for(int i = 0; i < guide.Length; i+=2) {
                RectTransform rect = guide[i].GetComponent<RectTransform>();
                rect.rotation = Quaternion.Euler(rotation);
            }

            backobject.SetActive(true);
            if(manager.help) {mat.color = new Color(1f, 1f, 0f, 1f);}
            else {mat.color = new Color(1f, 1f, 1f, 1f);}
            mat.SetColor(ShaderUtilities.ID_FaceColor, mat.color);
        }
        else {
            timer = 0f;
            manager.help = false;
            backobject.SetActive(false);
            gameObject.SetActive(false);
            foreach(GameObject g in guide) {g.SetActive(false);}
        }
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if(manager.help) {
            manager.help = false;
            foreach(GameObject g in guide) {g.SetActive(false);}
        }
        else {
            manager.help = true;
            foreach(GameObject g in guide) {g.SetActive(true);}
        }
    }
}
