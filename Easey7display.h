#ifndef Easey7display_h
#define Easey7display_h
#include "Arduino.h"

class Display
{  
public:
    Display(int a,int b,int c,int d,int e,int f,int g,bool anOrCat);
        void print(int numero);
private:
    //__________________________________
    int pinRegister[7]{};
    //int _a;
    //int _b;
    //int _c;
    //int _d;
    //int _e;
    //int _f;
    //int _g;
    bool _anOrCat;
    //__________________________________
    byte numDictionary[10]{
        0b1000000,     //0
        0b1111001,     //1
        0b0100100,     //2
        0b0110000,     //3
        0b0011001,     //4
        0b0010010,     //5
        0b0000010,     //6
        0b1111000,     //7
        0b0000000,     //8
        0b0010000      //9
    };
    //__________________________________
    void twist(byte toChange);
};
#endif