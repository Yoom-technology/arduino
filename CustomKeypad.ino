#include <Keypad.h>
#include <Servo.h>
Servo Servo1;
int servoPin = 13;
int led = 10;
int RED = 11;
int GREEN = 12;



const byte ROWS = 4; //four rows
const byte COLS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
char rowPins[ROWS] = {2, 3, 4, 5}; //connect to the row pinouts of the keypad
char colPins[COLS] = {6, 7, 8, 9}; //connect to the column pinouts of the keypad
//initialize an instance of class NewKeypad
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 
void setup(){
  Serial.begin(9600);
  pinMode (led , OUTPUT);
  pinMode (RED , OUTPUT);
  pinMode (GREEN , OUTPUT);
  Servo1.attach(9);

}
  void loop(){
  char customKey = customKeypad.getKey();
  
  if (customKey){
    Serial.println(customKey);
  }
  if (customKey=='B'){
   digitalWrite (led , HIGH);
   
  }
    if (customKey=='C'){
     digitalWrite (led , LOW);
      }
    if (customKey=='1'){
     digitalWrite (RED , HIGH);
          digitalWrite (GREEN , LOW);

      }

    if (customKey=='2'){
     digitalWrite (RED , LOW);
     digitalWrite (GREEN , HIGH);
      }

    if (customKey=='4'){
     digitalWrite (RED , LOW);
     digitalWrite (GREEN , LOW);
      }
    if (customKey=='0'){
     for(int i=0;i<180;i++){
        Servo1.write(i);
     }
  if (customKey=='A'){
   digitalWrite (led , HIGH);
   digitalWrite (led , LOW);

  if (customKey=='3'){
     digitalWrite (GREEN , HIGH);
      } 
  if (customKey=='3'){
     digitalWrite (RED , HIGH);
      } 


  }
}
  }



