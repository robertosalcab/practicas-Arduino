// C++ code
//
#include <Servo.h>

int potenciometro = 0;

Servo servo_8;

void setup()
{
  servo_8.attach(8, 500, 2500);
}

void loop()
{
  servo_8.write(0);
  delay(2000); // Wait for 2000 millisecond(s)
  servo_8.write(180);
  delay(2000); // Wait for 2000 millisecond(s)
  servo_8.write(90);
  delay(2000); // Wait for 2000 millisecond(s)
}