void setup()
{
  	pinMode(7, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(5, OUTPUT);

}


void loop()
{

  	digitalWrite(7, HIGH);
  	delayMicroseconds(1000);
  	digitalWrite(7, LOW);
  	delayMicroseconds(1000);
  	digitalWrite(6, HIGH);
  	delayMicroseconds(1000);
  	digitalWrite(6, LOW);
  	delayMicroseconds(1000);
  	digitalWrite(5, HIGH);
  	delayMicroseconds(1000);
  	digitalWrite(5, LOW);
  	delayMicroseconds(1000);

}