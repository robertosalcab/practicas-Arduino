// C++ code
//
int potenciometro = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  potenciometro = analogRead(A0);
  Serial.println(potenciometro);
  delay(10); // Delay a little bit to improve simulation performance
}