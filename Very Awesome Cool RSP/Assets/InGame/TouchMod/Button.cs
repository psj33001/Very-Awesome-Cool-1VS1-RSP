using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using TMPro;

public class Button : MonoBehaviour, IPointerDownHandler
{
    TextMeshProUGUI textMesh;
    Material mat;

    Player player1;
    Player player2;

    public string RSP;
    public GameObject backobject;
    public int playernum;

    void Start()
    {
        textMesh = GetComponent<TextMeshProUGUI>();
        mat = textMesh.fontMaterial;

        player1 = GameObject.FindWithTag("player1").GetComponent<Player>();
        player2 = GameObject.FindWithTag("player2").GetComponent<Player>();

        if(playernum == 1) {mat.color = new Color(1f, 0f, 0f, 1f);}
        if(playernum == 2) {mat.color = new Color(0f, 0f, 1f, 1f);}
        mat.SetColor(ShaderUtilities.ID_FaceColor, mat.color);
    }

    void Update()
    {
        if(playernum == 1)
        {
            if(mat.color.g > 0f) {mat.color = new Color(1f, mat.color.g-1f*Time.deltaTime*4, 0f, 1f);}
            else {mat.color = new Color(1f, 0f, 0f, 1f);}
        }
        if(playernum == 2)
        {
            if(mat.color.b < 1f) {mat.color = new Color(mat.color.r-1f*Time.deltaTime*4, mat.color.g-1f*Time.deltaTime*4, mat.color.b+1f*Time.deltaTime*4, 1f);}
            else {mat.color = new Color(0f, 0f, 1f, 1f);}
        }
        mat.SetColor(ShaderUtilities.ID_FaceColor, mat.color);
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if(playernum == 1)
        {
            if(RSP == "R") {player1.inputRSP = 0;}
            if(RSP == "S") {player1.inputRSP = 1;}
            if(RSP == "P") {player1.inputRSP = 2;}
        }
        if(playernum == 2)
        {
            if(RSP == "R") {player2.inputRSP = 0;}
            if(RSP == "S") {player2.inputRSP = 1;}
            if(RSP == "P") {player2.inputRSP = 2;}
        }
        mat.color = new Color(1f, 1f, 0f, 1f);
    }
}
