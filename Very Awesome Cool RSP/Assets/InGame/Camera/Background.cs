using UnityEngine;
using System.Collections;

public class Background : MonoBehaviour
{
    public Camera targetCamera;
    public Manager manager;
    public float duration = 5.0f;
    float sat = 0.5f;
    float bri = 0.7f;

    void Start()
    {
        if (targetCamera == null) {targetCamera = Camera.main;} // 카메라가 지정되지 않은 경우 기본 메인 카메라 사용

        StartCoroutine(ChangeBackgroundColor());
    }

    IEnumerator ChangeBackgroundColor()
    {
        float time = 0f;

        while (true)
        {
            time += Time.deltaTime;
            float t = (time / duration) % 1.0f; // 0에서 1 사이의 값 반복
            float hue = t; // hue 값은 0에서 1까지 변화
            Color newColor = Color.HSVToRGB(hue, sat, bri); // 채도(S)와 명도(V)는 1로 고정
            targetCamera.backgroundColor = newColor;

            yield return null; // 다음 프레임까지 대기
        }
    }

    void Update()
    {
        switch(manager.gameState)
        {
            case "notStarted":
                if(bri > 0.7f) {bri = 1f - manager.timer*0.3f;}
                else {bri = 0.7f;}
                if(sat > 0.5f) {sat = 0f + manager.timer*0.5f;}
                else {sat = 0.5f;}
                break;

            case "getStarted":
                if(bri > 0.2f) {bri = 0.7f - manager.timer*0.4f;}
                else {bri = 0.2f;}
                if(sat > 0f) {sat = 0.5f - manager.timer*0.3f;}
                else {sat = 0f;}
                break;

            case "game!!!":
                if(manager.timer < 0.1f) {bri = 0.8f;}
                else{
                    if(bri > 0.2f) {bri = 1f - manager.timer*0.8f;}
                    else {bri = 0.2f;}
                }
                break;

            case "getEnded":
                if(manager.timer < 0.1f) {
                    bri = 1f;
                    sat = 0f;
                }
                else{
                    if(bri > 0.7f) {bri = 1f - manager.timer*0.3f;}
                    else {bri = 0.7f;}
                    if(sat > 0.5f) {sat = 0f + manager.timer*0.5f;}
                    else {sat = 0.5f;}
                }
                break;
        }
    }
}