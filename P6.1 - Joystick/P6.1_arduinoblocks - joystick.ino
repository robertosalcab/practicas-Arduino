#include <Servo.h>

double ValorX;
double AnguloServo;
Servo servo_7;

void setup()
{
  	servo_7.attach(7);

	pinMode(A0, INPUT);

}


void loop()
{

  	ValorX = analogRead(A0);
  	AnguloServo = (((ValorX * 180)) / 1024);
  	servo_7.write(AnguloServo);

}