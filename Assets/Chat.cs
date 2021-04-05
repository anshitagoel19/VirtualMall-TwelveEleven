using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Chat : MonoBehaviour
{
    public string txt;
    public GameObject inputField;
    public GameObject textDisplay;

    public void StoreText()
    {
        txt = inputField.GetComponent<Text>().text;
        textDisplay.GetComponent<Text>().text = "Shopper1: " + txt;
        Destroy(this.textDisplay, 2);
    }

}
