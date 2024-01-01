// C++ code
//
int counter;

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, INPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  if (digitalRead(6) == 0) {
    delay(2000); // Wait for 2000 millisecond(s)
    digitalWrite(5, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(7, LOW);
    delay(2000); // Wait for 2000 millisecond(s)
    for (counter = 0; counter < 5; ++counter) {
      digitalWrite(5, LOW);
      delay(500); // Wait for 500 millisecond(s)
      digitalWrite(5, HIGH);
      delay(500); // Wait for 500 millisecond(s)
    }
    digitalWrite(5, LOW);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(7, HIGH);
  }
}