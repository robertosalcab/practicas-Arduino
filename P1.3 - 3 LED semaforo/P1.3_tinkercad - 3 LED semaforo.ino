// C++ code
//
int counter;

void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  // Luz roja
  digitalWrite(7, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(7, LOW);
  delay(500); // Wait for 500 millisecond(s)
  // Luz amarilla intermitente
  for (counter = 0; counter < 4; ++counter) {
    digitalWrite(6, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(6, LOW);
    delay(500); // Wait for 500 millisecond(s)
  }
  // Luz verde
  digitalWrite(5, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(5, LOW);
  delay(500); // Wait for 500 millisecond(s)
}