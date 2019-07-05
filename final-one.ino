void setup()
{
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  
}

void loop()
{
  digitalWrite(13, LOW);
  delay(10);
  digitalWrite(5, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(13, HIGH);
  
  digitalWrite(12, LOW);
  delay(10);
  digitalWrite(5, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(12, HIGH);
  
  digitalWrite(11, LOW);
  delay(10);
  digitalWrite(5, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(11, HIGH);
  
  digitalWrite(10, LOW);
  delay(10);
  digitalWrite(5, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(10, HIGH);
  
  delay(1000); // Wait for 1000 millisecond(s)
}
