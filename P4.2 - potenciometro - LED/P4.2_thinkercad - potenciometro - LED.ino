// C++ code
//
int potenciometro = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
  potenciometro = analogRead(A0);
  analogWrite(6, constrain(potenciometro, 255, 0));
  delay(10); // Delay a little bit to improve simulation performance
}