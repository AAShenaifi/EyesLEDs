// C++ code
//
void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(10, HIGH);
  delay(20); // Wait for 20 millisecond(s)
  digitalWrite(10, LOW);
  delay(20); // Wait for 20 millisecond(s)
}