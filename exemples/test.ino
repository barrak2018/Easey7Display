#include "Easey7display.h"
Display d1(2,3,4,5,6,7,8,false);
int pot = A5;
void setup() {
  //Serial.begin(9600);
  // put your setup code here, to run once:
  //Serial.begin(9600);

}
void loop() {
  int num = map(analogRead(pot),0,1023,0,10);
  delay(10);
  d1.print(num);
  
  }//:)
