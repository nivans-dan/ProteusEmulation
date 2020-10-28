void setup() 
{
  Serial.begin(9600);    
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT);
}

void loop ()
{
  float R = 0;
  float Il = 0;
  float V = 0;

  V = analogRead(A0);
  V = V*(5.0/1023.0);
  R = 613*((5/V)-1);
  Il = pow((R/126951),-1.1655);

  Serial.print("Voltaje: ");
  Serial.print(V);
  Serial.println(" V");
  Serial.print("Resistencia LDR: ");
  Serial.print(R);
  Serial.println(" Ohms");
  Serial.print("Intensidad luminosa: ");
  Serial.print(Il);
  Serial.println(" LUX");
  Serial.println("--------------");

  if(Il <= 2000)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }

  delay(1000);
}
