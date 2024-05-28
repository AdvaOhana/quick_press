#define redLed 2
#define greenLed 4

#define redBtn 11
#define greenBtn 9

#define ARR_LENGTH 2
bool LedIsOn[ARR_LENGTH];
int btnsArr[ARR_LENGTH] = {redBtn,greenBtn};
int ledsArr[ARR_LENGTH] = {redLed,greenLed};
int currBtn;
int lastBtn;
    void ToggleLed(int ledPinNumber){
      
    if(LedIsOn[ledPinNumber]){
      TurnLedOFF(ledPinNumber);
    }else{
      TurnLedOn(ledPinNumber);
    }
  
  }
  void TurnLedOn(int ledPinNumber){
    LedIsOn[ledPinNumber] = true;
    digitalWrite(ledsArr[ledPinNumber],HIGH);
    
    
  }
  void TurnLedOFF(int ledPinNumber){
     LedIsOn[ledPinNumber] = false;
    digitalWrite(ledsArr[ledPinNumber],LOW);
    

  }



void setup() {
  Serial.begin(9600);
  for(int k=0; k<ARR_LENGTH;k++){
  pinMode(btnsArr[k], INPUT_PULLUP);
  pinMode(ledsArr[k], OUTPUT);
  TurnLedOFF(k);
  }
}
void loop() {
  for(int i=0; i<ARR_LENGTH;i++){

currBtn=digitalRead(btnsArr[i])
  if((CurrBtn == LOW) && (LastBtn == HIGH)){
    ToggleLed(0);
  }
 

 LastBtn=CurrBtn;
  }
  
} 

  // if(digitalRead(redBtn)== LOW){
  //     num++;
      // while(digitalRead(redBtn)== LOW){
      //    delay(50);
      // }
  //   digitalWrite(redLed,num%2);
   
  // }

  //   if(digitalRead(greenBtn)== LOW){
  //     num++;
  //     while(digitalRead(greenBtn)== LOW){
  //        delay(50);
  //     }
  //   digitalWrite(greenLed,num%2);
  // }
