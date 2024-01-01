double Potenciometro;
double LED;
double Intensidad;

void fnc_dynamic_analogWrite(int _pin, int _e){
	pinMode(_pin,OUTPUT);
	analogWrite(_pin,_e);
}

void setup()
{


	Serial.begin(9600);
	Serial.flush();
	while(Serial.available()>0)Serial.read();

	pinMode(A0, INPUT);

	LED = 6;

}


void loop()
{

  	Potenciometro = analogRead(A0);
  	Intensidad = map(Potenciometro, 0,1023,0,255);
  	fnc_dynamic_analogWrite(LED, Intensidad);
  	Serial.print(Potenciometro);
  	Serial.print(String(""));
  	Serial.println(Intensidad);
  	delay(200);

}