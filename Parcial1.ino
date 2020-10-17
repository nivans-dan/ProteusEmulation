void setup() 
{
  Serial.begin (9600);
  pinMode (A1, INPUT);
  pinMode (A2, INPUT);
}

void loop() 
{
  float v;
  float v1 = analogRead (A1);
  float v2 = analogRead (A2);
  float voltaj1 = v1 * (5.0 / 1023.0);
  float voltaj2 = v2 * (5.0 / 1023.0);
  float temp = voltaj1 / .0171;

  float salida = voltaj2 - voltaj1;

  Serial.print("Temp = ");
  Serial.print(temp);
  Serial.println(" C");
  Serial.print(salida);
  Serial.println ("V");
   
  delay(1000);
}
