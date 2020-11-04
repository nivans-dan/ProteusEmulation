#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() 
{
  pinMode(A0, INPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop()
{
  float volt, X, Y;
  float a = .0146;
  float b = .5322;
  float c = 3.8889;
  
  delay(1000);
  
  volt = analogRead(A0);
  volt = volt*(5.0/1023.0);
  lcd.setCursor(0,0);
  lcd.print("Voltaje:");
  lcd.setCursor(9,0);
  lcd.print(volt);
  lcd.setCursor(15,0);
  lcd.print("V");
  c = c - volt;
  X = (b + sqrt( (b*b) - (4 * a * c) ) ) / (2.0 * a);
  Y = (b - sqrt( (b*b) - (4 * a * c) ) ) / (2.0 * a);
  Serial.print(" X ");
  Serial.println(X);
  Serial.print(" Y ");
  Serial.println(Y);
  lcd.setCursor(0, 1);
  lcd.print("Distancia:");
  lcd.setCursor(10, 1);
  lcd.print(Y);
  lcd.setCursor(14, 1);
  lcd.print("mm");
 }
