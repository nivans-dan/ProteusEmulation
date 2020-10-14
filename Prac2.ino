void setup()
{
    Serial.begin (9600);
    pinMode (A1, INPUT);
}

void loop()
{
    float aux = analogRead (A1);
    float voltaje = aux * (5.0 / 1023.0);
    float Temp = voltaje/.0926;
    
    Serial.print("Temperatura = ");
    Serial.print(Temp);
    Serial.println(" C");

    delay(1000);
}
