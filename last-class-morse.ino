 int incomingByte;
 
void setup()
{
  Serial.begin(9600);
  pinMode(8,OUTPUT);
}
 
void loop()
{
 if(Serial.available()>0)
 {
  incomingByte=Serial.read();
  switch(incomingByte)
  {
    case 65:
            
            dot();dash();
            delay(250*3);
            break;
    case 66:
            
            dash();dot();dot();dot();
            delay(250*3);
            break;
    case 67:
             
            dash();dot();dash();dot();
            delay(250*3);
            break;
    case 68:
            
             dash();dot();dot();
            delay(250*3);
            break;
    case 69:
             
            dot();
            delay(250*3);
            break;
    case 70:
            
             dot();dot();dash();dot();
            delay(250*3);
            break;
    case 71:
            
           dash();dash();dot();
            delay(250*3);
            break;
    case 72:
            
          dot();dot();dot();dot();
            delay(250*3);
            break;
    case 73:
            
            dot();dot();
            delay(250*3);
            break;
    case 74:
            
            dot();dash();dash();dash();
            delay(250*3);
            break;
    case 75:
            
             dash();dot();dash();
            delay(250*3);
            break;
    case 76:
             
            dot();dash();dash(); dot();
            delay(250*3);
            break;
    case 77:
             
            dash();dash();
            delay(250*3);
            break;
    case 78:
            
            dash();dot();
            delay(250*3);
            break;
    case 79:
            
          dash(); dash();dash();
            delay(250*3);
            break;
    case 80:
             
          dash();dot();dash();
            delay(250*3);
            break;
     case 81:
            
            dot();dash();dash();dot();
            delay(250*3);
            break;
     case 82:
            
            dot();dash();dot();
            delay(250*3);
            break;
     case 83:
            
            dash();
            delay(250*3);
            break;
    case 84:
            
            dot();dot();dash();
            delay(250*3);
            break;
    case 85:
             
            dot();dot();dot();dash();
            delay(250*3);
            break;
     case 86:
             
           dot();dash();dash();
            delay(250*3);
            break;
    case 87:
           
            dash();dot();dot();dash();
            delay(250*3);
            break;
    case 88:
             
            dash();dot();dash();dash();
            delay(250*3);
            break;
    case 89:
            
            dash();dot();dash();dot();
            delay(250*3);
            break;
    case 90:
            delay(250*3);
            break;
    default:
            break;
  }
 }
}


void dot()
{
  digitalWrite(8,HIGH);
  delay(250);
  digitalWrite(8,LOW);
  delay(250);
}
void dash()
{
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(250);
}
