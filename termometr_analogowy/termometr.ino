#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  long odczyt = analogRead(A0);
  lcd.setCursor(0, 0);
  lcd.print("ADC: ");
  lcd.setCursor(8, 0);
  lcd.print(analogRead(A0));
  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.setCursor(8, 1);
  lcd.print(normalizeTemperature(odczyt));
  delay(1000);
}

float normalizeTemperature(long rawData) { 
  // replace these constants with your 2 data points
  // these are sample values that will get you in the ballpark (in degrees C)
  float temp1 = 32.4;
  long data1 = 276;
  float temp2 = 5.5;
  long data2 = 135;
 
  // calculate the scale factor
  float scaleFactor = (temp2 - temp1) / (data2 - data1);

  // now calculate the temperature
  float temp = scaleFactor * (rawData - data1) + temp1;

  return temp;
}
