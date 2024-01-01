#include <Servo.h>

Servo servo_8;

void setup()
{
  	servo_8.attach(8);

}


void loop()
{

  	servo_8.write(0);
  	delay(250);
  	servo_8.write(180);
  	delay(250);
  	servo_8.write(90);
  	delay(250);

}