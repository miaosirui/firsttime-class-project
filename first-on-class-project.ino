void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
}
int income=0;
void loop()
{
  if(Serial.available()>0)
  {
    income=Serial.read();
    switch(income)
    {
      case 'F':
            forward();break;
      case 'B':
            backward();break;
      case 'L':
            left();break;
      case 'R':
            right();break;
      case 'S':
            stop();break;
      default :
            break;
    }
  }
}

void forward()
{
  digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
}

void backward()
{
  digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
}

void left()
{
  digitalWrite(10,LOW);
    digitalWrite(9,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
}
void right()
{
  digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
}
void stop()
{
  digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
}
