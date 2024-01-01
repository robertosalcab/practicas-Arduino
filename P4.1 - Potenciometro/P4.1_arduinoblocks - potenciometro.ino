double Potenciometro;

void setup()
{


	pinMode(A0, INPUT);
	Serial.begin(9600);
	Serial.flush();
	while(Serial.available()>0)Serial.read();

}


void loop()
{

  	Potenciometro = analogRead(A0);
  	Serial.print(Potenciometro);
  	Serial.println(String(""));
  	delay(50);

}