double luminosidad;

void setup()
{


	Serial.begin(9600);
	Serial.flush();
	while(Serial.available()>0)Serial.read();

	pinMode(A5, INPUT);

}


void loop()
{

  	luminosidad = analogRead(A5);
  	Serial.println(luminosidad);
  	delay(500);

}