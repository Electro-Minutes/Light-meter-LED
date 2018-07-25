
void setup()
{
  for (int i = 2; i <= 10; i ++)
  {
    pinMode(i, OUTPUT);
  }

  pinMode(A0, INPUT_PULLUP);
  Serial.begin(9600);
}



void loop()
{
  int reading = analogRead(A0);
  Serial.println(reading);
  int g = map(reading, 150, 750, 10, 0);
  for (int i = 2; i <= g; i++)
  {
    digitalWrite(i, HIGH);
  }
  if (g < 2)
    g = 2;
  for (int i = g; i <= 10; i++)
  {
    if (g == 10)
             continue;
    digitalWrite(i, LOW);
  }
  delay(50);
}

