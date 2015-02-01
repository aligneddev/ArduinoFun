//Turns on and off a LED ,when pressings button attach to pin12
/**********************************/
const int keyPin = 12; //the number of the key pin
/**********************************/

int count = 255;
void turnOn(int level, int choice){
  if(choice = 0){
    analogWrite(6, level);
  }
  if(choice = 1){
    analogWrite(7, level);
  }
  if(choice = 2){
    analogWrite(8, level);
  }
}

void turnOff(int choice){
  if(choice > 3){
    digitalWrite(8,LOW);//turn off the led
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);  
  }
  else{
    if(choice = 0){
   digitalWrite(6, LOW);  
    }
   else if(choice = 1){
    digitalWrite(7, LOW);  
   } 
   else if(choice = 2){
     digitalWrite(8, LOW);  
   }
  }

void setup()
{
  pinMode(keyPin,INPUT);//initialize the key pin as input 
  pinMode(8,OUTPUT);//initialize the led pin as output
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  
  Serial.begin(9600);
}

/**********************************/
int choice = 0;
void loop()
{
  //read the state of the key value
  //and check if the kye is pressed
  //if it is,the state is HIGH 
  if(digitalRead(keyPin) == HIGH )
  {
      //digitalWrite(ledPin,HIGH);//turn on the led
      Serial.print("on to ");
      Serial.print(count);
      Serial.println();
      if(count <= 100){
        choice = 0;
        turnOff(1);
        turnOff(2);
      }
      if(count > 100 && count <= 200){
        choice = 1;
      }
      else if(count > 200 && count < 255){
       choice = 2; 
      }
        
      turnOn(count, choice);
      //if(count < 255){
      //  count = count + 1;
      //}
      count = count + 1;
  }
  else
  {
    turnOff(3);
    Serial.print("off");
    Serial.println();
    count = 0;
  }
}
/************************************/
