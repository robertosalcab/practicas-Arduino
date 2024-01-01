double temperatura;

void setup()
{
  	pinMode(A0, INPUT);

	Serial.begin(9600);
	Serial.flush();
	while(Serial.available()>0)Serial.read();

}


void loop()
{

  	temperatura = (((analogRead(A0)/1023.0)*(5.0*1000.0))/10.0);
  	Serial.println(temperatura);
  	delay(500);

}