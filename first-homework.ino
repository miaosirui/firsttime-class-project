#include <Morse.h>

int incomingByte;
 
void setup()
{
  Serial.begin=(9600);
}
 
void loop()
{
 if(Serial.available()>0)
 {
  incomingByte=Serial.read();
  switch(incomingByte)
  {
    case 65:
            //A
            morse.dot();morse.dash();
            delay(250*3);
            break;
    case 66:
            //B
            morse.dash();morse.dot();morse.dot();morse.dot();
            delay(250*3);
            break;
    case 67:
             //C
             morse.dash();morse.dot();morse.dash();morse.dot();
            delay(250*3);
            break;
    case 68:
            //D
             morse.dash();morse.dot();morse.dot();
            delay(250*3);
            break;
    case 69:
             //E
             morse.dot();
            delay(250*3);
            break;
    case 70:
            //F
             morse.dot();morse.dot();morse.dash();morse.dot();
            delay(250*3);
            break;
    case 71:
            //G
            morse.dash();morse.dash();morse.dot();
            delay(250*3);
            break;
    case 72:
            //H
           morse.dot();morse.dot();morse.dot();morse.dot();
            delay(250*3);
            break;
    case 73:
            //I
             morse.dot();morse.dot();
            delay(250*3);
            break;
    case 74:
            //J
            morse.dot();morse.dash();morse.dash();morse.dash();
            delay(250*3);
            break;
    case 75:
             //K
             morse.dash();morse.dot();morse.dash();
            delay(250*3);
            break;
    case 76:
             //L
            morse.dot();morse.dash();morse.dash(); morse.dot();morse.dot();
            delay(250*3);
            break;
    case 77:
             //M
            morse.dash();morse.dash();
            delay(250*3);
            break;
    case 78:
            //N
            morse.dash();morse.dot();
            delay(250*3);
            break;
    case 79:
            //0
           morse.dash(); morse.dash(); morse.dash();
            delay(250*3);
            break;
    case 80:
             //P
           morse.dot(); morse.dash(); morse.dash();morse.dot（）；
            delay(250*3);
            break;
     case 81:
            //R
            morse.dot(); morse.dash(); morse.dash();morse.dot（）；
            delay(250*3);
            break;
    case 82:
             //S
            morse.dot();   morse.dot();morse.dot（）；
            delay(250*3);
            break;
    case 83:
            //T
            morse.dash();
            delay(250*3);
            break;
    case 84:
            //U
            morse.dot();morse.dot();morse.dash();
            delay(250*3);
            break;
    case 85:
             //V
            morse.dot();morse.dot();morse.dot();morse.dash();
            delay(250*3);
            break;
     case 82:
             //W
            morse.dot();morse.dash();morse.dash();
            delay(250*3);
            break;
    case 83:
           //X
            morse.dash();morse.dot();morse.dot();morse.dash();
            delay(250*3);
            break;
    case 84:
             //Y
            pmorse.dash();morse.dot();morse.dash();morse.dash();
            delay(250*3);
            break;
    case 85:
            //Z
            morse.dash();morse.dot();pmorse.dash();morse.dot();
            delay(250*3);
            break;
    case 32://空格
            delay(250*3)
            break;
    default
            break;
  }
 }
}
