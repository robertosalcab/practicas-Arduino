#include <LiquidCrystal.h>

double luminosidad;
LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{


lcd.begin(16, 2);

	pinMode(A5, INPUT);

}


void loop()
{

  	luminosidad = analogRead(A5);
  	delay(500);
  	lcd.setCursor(0, 0);
  	lcd.print(String("Nivel de luz:"));
  	lcd.setCursor(0, 2);
  	lcd.print(luminosidad);
  	lcd.setCursor(6, 3);
  	lcd.print(String("%"));

}