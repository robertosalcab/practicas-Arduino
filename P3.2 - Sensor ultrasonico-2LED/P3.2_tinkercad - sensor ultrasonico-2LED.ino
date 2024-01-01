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

  if (distancia >=20){			// Luz verde si >20cm
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  }
  else if ((distancia < 20)){	// Luz amarilla si <20cm
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  }
}
