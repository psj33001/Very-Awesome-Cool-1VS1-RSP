using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Title : MonoBehaviour
{
    public Manager manager;
    TextMeshProUGUI title;
    float fade;
    float timer;
    Color color;

    void Awake()
    {
        title = GetComponent<TextMeshProUGUI>();
        color = title.color;
    }

    void Update()
    {
        if(color.a <= 0f) {fade = 1.2f;}
        if(color.a >= 1f) {fade = -1.2f;}
        color.a += fade*Time.deltaTime;
        Material mat = title.fontMaterial;
        mat.SetColor(ShaderUtilities.ID_FaceColor, color);
        mat.SetFloat(ShaderUtilities.ID_LightAngle, timer*1.1f);
        
        timer += Time.deltaTime;
        transform.localScale = new Vector2(0.9f + 0.1f*Mathf.Cos(timer*1.1f), 0.9f + 0.1f*Mathf.Sin(timer*1.1f));
        
        if(manager.gameStarted == true) {gameObject.SetActive(false);}
    }
}
