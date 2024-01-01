// C++ code
//
int luminosidad = 0;
int value, normalizedValue;


void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  luminosidad = analogRead(A0);
  normalizedValue = map(luminosidad,0,308,0,100);

  delay(1000); // Wait for 1000 millisecond(s)
  Serial.println(normalizedValue);
}