double distancia;

double fnc_ultrasonic_distance(int _t, int _e){
	unsigned long dur=0;
	digitalWrite(_t, LOW);
	delayMicroseconds(5);
	digitalWrite(_t, HIGH);
	delayMicroseconds(10);
	digitalWrite(_t, LOW);
	dur = pulseIn(_e, HIGH, 18000);
	if(dur==0)return 999.0;
	return (dur/57);
}

void setup()
{
  	pinMode(13, OUTPUT);
	pinMode(12, INPUT);
	pinMode(7, OUTPUT);
	pinMode(6, OUTPUT);

	Serial.begin(9600);
	Serial.flush();
	while(Serial.available()>0)Serial.read();

}


void loop()
{

  	if ((fnc_ultrasonic_distance(13,12) > 20)) {
  		digitalWrite(7, HIGH);
  		digitalWrite(6, LOW);
  	}
  	else if ((distancia < 20)) {
  		digitalWrite(7, LOW);
  		digitalWrite(6, HIGH);
  	}

}