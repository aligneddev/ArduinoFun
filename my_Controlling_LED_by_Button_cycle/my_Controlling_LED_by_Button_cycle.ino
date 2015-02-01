//Turns on and off a LED ,when pressings button attach to pin12
/**********************************/
const int keyPin = 12; //the number of the key pin
/**********************************/

int count = 0;
int choice = 0;
void turnOn( int choice){
  int level = 255;
  Serial.print("choice ");
  Serial.print(choice);
  Serial.println();
      Serial.print(count);
      Serial.println();
  if(choice == 0){
//    analogWrite(6, level);
    digitalWrite(7,HIGH);
  }
  if(choice == 1){
    //analogWrite(7, level);
    digitalWrite(8,HIGH);
  }
  if(choice == 2){
//    analogWrite(8, level);
    digitalWrite(9,HIGH);
  }
}

void turnOff(int choice){
  if(choice == 3){
    digitalWrite(7,LOW);//turn off the led
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);  
  }
  else{
    Serial.print("off choice");
    Serial.print(choice);
    Serial.println();
    if(choice == 0){
     digitalWrite(7, LOW);  
    }
   else if(choice == 1){
    digitalWrite(8, LOW);  
   } 
   else if(choice == 2){
     digitalWrite(9, LOW);  
   }
  }
}

void setup()
{
  pinMode(keyPin,INPUT);//initialize the key pin as input 
  pinMode(7,OUTPUT);//initialize the led pin as output
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  turnOff(3);
  Serial.begin(9600);
}

/**********************************/
void loop()
{
  //read the state of the key value
  //and check if the kye is pressed
  //if it is,the state is HIGH 
  if(digitalRead(keyPin) == HIGH )
  {
      //digitalWrite(ledPin,HIGH);//turn on the led
      Serial.print("on ");
      Serial.print(count);
      Serial.println();
      if(count <= 100){
        choice = 0;
        if(count == 0){
          turnOff(1);
          turnOff(2);
        }
      }
      else if(count > 100 && count <= 200){
        choice = 1;
        if(count == 101){
          turnOn(choice);
          turnOff(0);
          turnOff(2);
        }
      }
      else if(count > 200 && count < 300){
        choice = 2; 
        if(count == 201){
          turnOn(choice);
          turnOff(0);
          turnOff(1);
        }
      }
        
      if(count == 300){
        count = 0;
        turnOff(3);
      }
      
      count = count + 1;
  }
  else
  {
       turnOff(3);
  }
}
/************************************/
