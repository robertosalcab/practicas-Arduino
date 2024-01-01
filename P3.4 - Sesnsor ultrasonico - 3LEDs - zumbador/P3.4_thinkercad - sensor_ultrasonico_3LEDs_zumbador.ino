// C++ code
//
int trigger = 13; 	// en pin 12
int echo = 12;		// en pin 11

int duracion;		//lectura de tiempo entre salida del ultrasonido y llegada del eco
int distancia;		//variable que utilizaremos para almacenar la distancia en cm

void setup()
{
pinMode(trigger, OUTPUT); 	// trigger como salida
pinMode(echo, INPUT);		// echo como entrada
Serial.begin(9600);  		// inicializacion de comunicacion serial a 9600 bps
pinMode(7, OUTPUT);			// definir salida 7 = LED verde
pinMode(6, OUTPUT);			// definir salida 6 = LED amarillo
pinMode(5, OUTPUT);			// definir salida 5 = LED rojo
  
}

void loop()
{
digitalWrite(trigger, HIGH); 	// generacion del pulso a enviar
digitalWrite(trigger, LOW);		// del sensor
duracion = pulseIn(echo, HIGH);	// con funcion pulseIn se espera un pulso alto en Echo
distancia = duracion / 58.2;	// distancia medida en centímetros
Serial.print(distancia);		// envio de valor de distancia por monitor serial
Serial.println(" cm");			// envio de texto "cm" por monitor serial
delay(500);					// demora entre datos

  if (distancia >=100){			// Luz verde >1m
  digitalWrite(7, HIGH);		// Luz verde ON
  digitalWrite(6, LOW);			// Luz amarilla OFF
  digitalWrite(5, LOW);			// Luz rojo OFF
  tone(3, 784, 500); // play tone 67 (G5 = 784 Hz) [SOL]
  }
  else if ((distancia < 100 && distancia >=50)){	// Luz amarilla (<1-0.5m)
  digitalWrite(7, LOW);			// Luz verde OFF
  digitalWrite(6, HIGH);		// Luz amarilla ON
  digitalWrite(5, LOW);			// Luz rojo OFF
  tone(3, 880, 1000); // play tone 69 (A5 = 880 Hz) [LA]  
  }
  else if ((distancia < 50)){	// Luz roja (<0.5m)
  digitalWrite(7, LOW);			// Luz verde OFF
  digitalWrite(6, LOW);			// Luz amarilla OFF
  digitalWrite(5, HIGH);		// Luz roja ON
  tone(3, 988, 2000); // play tone 71 (B5 = 988 Hz) [SI]
  }
}
