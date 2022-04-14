#include "Arduino.h"
#include "Easey7display.h"

// false: to commond  catode
// True: to commond anode

Display::Display(int a,int b,int c,int d,int e,int f,int g,bool anOrCat)
{
    //_______________________
    _anOrCat=anOrCat;
    pinRegister[0]=a;
    pinRegister[1]=b;
    pinRegister[2]=c;
    pinRegister[3]=d;
    pinRegister[4]=e;
    pinRegister[5]=f;
    pinRegister[6]=g;
    //_______________________
    if (_anOrCat==false)
    {
        for (int i = 0; i < 10; i++)
        {
            byte toChange=~numDictionary[i];
            numDictionary[i]=toChange;
        }
        
    }
    //_______________________


    for (int i = 0; i < 7; i++)
    {
        pinMode(pinRegister[i],OUTPUT);
    }
    
    
};


void Display::print(int digito)
{
    byte numero = numDictionary[digito];

    for (int i = 0; i < 7; i++)
    {
        int bit = bitRead(numero, i);
        digitalWrite(pinRegister[i], bit);
    }
};

