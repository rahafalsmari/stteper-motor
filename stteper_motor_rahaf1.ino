#include <Stepper.h>
const int stepr=200;
Stepper mystepper (stepr,8,9,10,11);
int stepcount=0;



void setup()
{
  
}

void loop()
{
  int sensorReading=analogRead(A0);
  int motorSpeed=map(sensorReading,0,1023,0,250);
  if(motorSpeed>0){
    mystepper.setSpeed(motorSpeed);
    mystepper.step(stepr/100);
  }
}