void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
  Serial.begin(9600);
}
int income;
void loop()
{
  if(Serial.available()>0)
  {
    income=Serial.read()-'0';
    switch(income)
    {
      case 1:
            ledflash1();
            break;
      case 2:
            ledflash2();break;
      case 3:
            ledflash3();break;
      case 4:
            ledflash4();break;
      case 5:
            ledflash5();break;
      case 6:
            ledflash6();break;
      case 7:
            ledflash7();break;
      case 8:
            ledflash8();break;
      case 9:
            ledflash9();break;
      case 0:
            ledflash0();break;
      default:
            break;
    }
  }
}


void ledflash1()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(1,HIGH);
  delay(10);
  digitalWrite(2,LOW);
  delay(10);
  digitalWrite(3,LOW);
  delay(10);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
}
void ledflash2()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(1,LOW);
  delay(10);
  digitalWrite(2,HIGH);
  delay(10);
  digitalWrite(3,LOW);
  delay(10);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
}
void ledflash3()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(1,HIGH);
  delay(10);
  digitalWrite(2,HIGH);
  delay(10);
  digitalWrite(3,LOW);
  delay(10);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
}
void ledflash4()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(1,LOW);
  delay(10);
  digitalWrite(2,LOW);
  delay(10);
  digitalWrite(3,HIGH);
  delay(10);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
}
void ledflash5()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(1,HIGH);
  delay(10);
  digitalWrite(2,LOW);
  delay(10);
  digitalWrite(3,HIGH);
  delay(10);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
}
void ledflash6()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(1,LOW);
  delay(10);
  digitalWrite(2,HIGH);
  delay(10);
  digitalWrite(3,HIGH);
  delay(10);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
}
void ledflash7()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(1,HIGH);
  delay(10);
  digitalWrite(2,HIGH);
  delay(10);
  digitalWrite(3,HIGH);
  delay(10);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
}
void ledflash8()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(1,LOW);
  delay(10);
  digitalWrite(2,LOW);
  delay(10);
  digitalWrite(3,LOW);
  delay(10);
  digitalWrite(4,HIGH);
  delay(10);
  digitalWrite(5,HIGH);
}
void ledflash9()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(1,HIGH);
  delay(10);
  digitalWrite(2,LOW);
  delay(10);
  digitalWrite(3,LOW);
  delay(10);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
}
 void ledflash0()
{
  digitalWrite(5,LOW);
  delay(10);
  digitalWrite(1,LOW);
  delay(10);
  digitalWrite(2,LOW);
  delay(10);
  digitalWrite(3,LOW);
  delay(10);
  digitalWrite(4,LOW);
  delay(10);
  digitalWrite(5,HIGH);
}
  
