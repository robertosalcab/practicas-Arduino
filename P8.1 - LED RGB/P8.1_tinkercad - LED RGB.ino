// C++ code
//
int rojo = 0;

int verde = 0;

int azul = 0;

void setup()
{
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);

  // Rojo (6)
  digitalWrite(6, LOW);
  // Verde (5)
  digitalWrite(5, LOW);
  // Azul (3)
  digitalWrite(3, LOW);
}

void loop()
{
  digitalWrite(6, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(3, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
}