#include "Easey7display.h"
Display d1(2,3,4,5,6,7,8,true);

void setup() {
}
void loop() {
  for (int i = 0; i < 10; i++)
  {
    d1.print(i);
    delay(1000);
  }
  
  
  }//:)
