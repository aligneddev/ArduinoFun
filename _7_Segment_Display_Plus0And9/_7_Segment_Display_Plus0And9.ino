/**
 * Started from the starter kit from Sunfounder Superkit.
 - Renamed variables to match position of the diagram
 - Added 0 and 9
 */

const int topMiddle=7; //a of 7-segment attach to digital pin 7
const int topRight=6; //b of 7-segment attach to digital pin 6
const int c=5; //c of 7-segment attach to digital pin 5
const int bottomMiddle=11;//d of 7-segment attach to digital pin 11
const int bottomLeft=10;//e of 7-segment attach to digital pin 10
const int topLeft=8;//f of 7-segment attach to digital pin 8
const int middle=9;//g of 7-segment attach to digital pin 9
const int decimalPoint=4;//decimalPoint of 7-segment attach to digital pin 4

void setup()
{
  //loop over thisPin from 4 to 11 and set them all to output
  for(int thisPin = 4;thisPin <= 11;thisPin++)
  {
    pinMode(thisPin,OUTPUT);
  }
}

void loop()
{
  digital_0();
  delay(1000);
  digital_1();//diaplay 1 to the 7-segment
  delay(1000);//wait for a second
  digital_2();//diaplay 2 to the 7-segment
  delay(1000); //wait for a second
  digital_3();//diaplay 3 to the 7-segment
  delay(1000); //wait for a second
  digital_4();//diaplay 4 to the 7-segment
  delay(1000); //wait for a second
  digital_5();//diaplay 5 to the 7-segment
  delay(1000); //wait for a second
  digital_6();//diaplay 6 to the 7-segment
  delay(1000); //wait for a second
  digital_7();//diaplay 7 to the 7-segment
  delay(1000); //wait for a second
  digital_8();//diaplay 8 to the 7-segment
  delay(1000); //wait for a second  
  digital_9();//diaplay 9 to the 7-segment
  delay(1000); //wait for a second
}
void digital_0(void){
 digital_8();
 digitalWrite(middle, LOW); // turn off the middle
}

void digital_1(void) //diaplay 1 to the 7-segment
{
  digitalWrite(c,HIGH);//turn the c of the 7-segment on
  digitalWrite(topRight,HIGH);//turn the b of the 7-segment on
  for(int j = 7;j <= 11;j++)//turn off the others
  {
    digitalWrite(j,LOW);
  }
  digitalWrite(decimalPoint,LOW);//turn the dp of the 7-segment off
}
void digital_2(void) //diaplay 2 to the 7-segment
{
  digitalWrite(topRight,HIGH);
  digitalWrite(topMiddle,HIGH);
  for(int j = 9;j <= 11;j++)
  digitalWrite(j,HIGH);
  digitalWrite(decimalPoint,LOW);
  digitalWrite(c,LOW);
  digitalWrite(topLeft,LOW);
}
void digital_3(void) //diaplay 3 to the 7-segment
{
  unsigned char j;
  digitalWrite(middle,HIGH);
  digitalWrite(bottomMiddle,HIGH);
  for(j=5;j<=7;j++)
  digitalWrite(j,HIGH);
  digitalWrite(decimalPoint,LOW);
  digitalWrite(topLeft,LOW);
  digitalWrite(bottomLeft,LOW);
}
void digital_4(void) //diaplay 4 to the 7-segment
{
  digitalWrite(c,HIGH);
  digitalWrite(topRight,HIGH);
  digitalWrite(topLeft,HIGH);
  digitalWrite(middle,HIGH);
  digitalWrite(decimalPoint,LOW);
  digitalWrite(topMiddle,LOW);
  digitalWrite(bottomLeft,LOW);
  digitalWrite(bottomMiddle,LOW);
}
void digital_5(void) //diaplay 5 to the 7-segment
{
  unsigned char j;
  for(j = 7;j <= 9;j++)
  digitalWrite(j,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(bottomMiddle,HIGH);
  digitalWrite(decimalPoint,LOW);
  digitalWrite(topRight,LOW);
  digitalWrite(bottomLeft,LOW);
}
void digital_6(void) //diaplay 6 to the 7-segment
{
  unsigned char j;
  for(j = 7;j <= 11;j++)
  digitalWrite(j,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(decimalPoint,LOW);
  digitalWrite(topRight,LOW);
}
void digital_7(void) //diaplay 7 to the 7-segment
{
  unsigned char j;
  for(j = 5;j <= 7;j++)
  digitalWrite(j,HIGH);
  digitalWrite(decimalPoint,LOW);
  for(j = 8;j <= 11;j++)
  digitalWrite(j,LOW);
}
void digital_8(void) //diaplay 8 to the 7-segment
{
  unsigned char j;
  for(j = 5;j <=11;j++)
  digitalWrite(j,HIGH);
  digitalWrite(decimalPoint,LOW);
}

void digital_9(void) //diaplay 9 to the 7-segment
{
  unsigned char j;
  digital_4();
  digitalWrite(topMiddle,HIGH);//turn the c of the 7-segment on
}
