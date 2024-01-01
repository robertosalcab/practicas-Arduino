#include<LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int value, normalizedValue;

void setup()
{
  
  pinMode(5, INPUT);	//LDR

  lcd.begin(16,2);
  lcd.print("Nivel de luz");
}

void loop()
{
value = analogRead(5);
normalizedValue = map(value,0,76,0,100);
lcd.setCursor(0, 1);
lcd.print(normalizedValue);
lcd.print("%"); 
  delay(1000);
  }