int FSR_Pin =  A0;
#include <LiquidCrystal.h>
LiquidCrystal lcd(4, 5, 6, 7, 8, 9);
//analog pin
void setup()
{
  lcd.begin(16, 2);
}
void loop()
{
  int FSRReading = analogRead(FSR_Pin);
  lcd.clear();
  lcd.setCursor(0, 0);
  if (FSRReading <= 400)
  lcd.print("buy more pasta");
  else
  lcd.print("full on pasta");
  delay(250);
}
