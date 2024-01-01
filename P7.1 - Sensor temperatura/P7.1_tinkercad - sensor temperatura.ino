// C++ code
//
int lectura = 0;

int temperatura = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop()
{
  // Tomamos la lectura analógica del pin al cual
  // conectamos la señal de nuestro sensor
  lectura = analogRead(A0);
  // Obtenemos la temperatura (ºC) con la siguiente
  // fórmula
  temperatura = (lectura * (500 / 1023));
  // Imprimimos por el monitor serie la temperatura
  // en Celisius
  Serial.print(temperatura);
  Serial.println("ºC");
  delay(500); // Wait for 500 millisecond(s)
}