// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  // SOL
  tone(13, 784, 500); // play tone 67 (G5 = 784 Hz)
  delay(500); // Wait for 500 millisecond(s)
  // SOL
  tone(13, 784, 500); // play tone 67 (G5 = 784 Hz)
  delay(500); // Wait for 500 millisecond(s)
  // LA
  tone(13, 880, 1000); // play tone 69 (A5 = 880 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
  // SOL
  tone(13, 784, 1000); // play tone 67 (G5 = 784 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
  // DO'
  tone(13, 1047, 1000); // play tone 72 (C6 = 1047 Hz)
  delay(1000); // Wait for 1000 millisecond(s)
  // SI
  tone(13, 988, 2000); // play tone 71 (B5 = 988 Hz)
  delay(2000); // Wait for 2000 millisecond(s)
}