#include <LiquidCrystal.h>


const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int sensorPin = A0;  
int sensorValue = 0;  
int percent = 0;
String percentString ="0";

void setup() {
  lcd.begin(16, 2);
  lcd.print("Humidity: ");
}

int convertToPercent(int value)
{
  int percentValue = 0;
  percentValue = map(value, 1023, 350, 0, 100);
  if(percentValue>100)
    percentValue = 100;
  return percentValue;
}

void avertizare(int value)
{
  if (value <= 50)
  {
    lcd.setCursor(0,1);
    lcd.print("Water me!");
    return;
  }
  if (value >= 60)
  {
    lcd.setCursor(0,1);
    lcd.print("Too much!");
    return;
  }
  if (value >= 50 && value <= 60)
  {
    lcd.setCursor(0,1);
    lcd.print("Perfect!");
    return;
  }
}

void loop() {

  lcd.begin(16, 2);
  lcd.print("Humidity: ");
  
  lcd.setCursor(11, 0);
  
  sensorValue = analogRead(sensorPin);
  percent = convertToPercent(sensorValue);
  percentString = String(percent);
  percentString = percentString + "%";
  
  lcd.print(percentString);
  avertizare(percent);
  delay(1000);
  lcd.clear();
}
