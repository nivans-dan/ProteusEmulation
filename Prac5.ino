void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float band = 0.05;
  int i = 0;
  int j = 0;
  i = analogRead(A0);
  j = (band*i) + ((1-band)*j);

  Serial.println(j);
}
