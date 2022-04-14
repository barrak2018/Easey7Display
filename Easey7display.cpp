#include "Arduino.h"
#include "Easey7display.h"

// false: to commond  catode
// True: to cmmod anode

Display::Display(int a,int b,int c,int d,int e,int f,int g,bool anOrCat)
{
    //_______________________
    _a=a;
    _b=b;
    _c=c;
    _d=d;
    _e=e;
    _f=f;
    _g=g;
    _anOrCat=anOrCat;
    pinRegister[0]=_a;
    pinRegister[1]=_b;
    pinRegister[2]=_c;
    pinRegister[3]=_d;
    pinRegister[4]=_e;
    pinRegister[5]=_f;
    pinRegister[6]=_g;
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
        //Serial.println(numDictionary[i]);
        //delay(10);
    }
};

