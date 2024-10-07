#include <Keyboard.h>

const int buttonPin1 = 13;  
const int buttonPin2 = 12;  

int buttonState1 = 0;      
int buttonState2 = 0;      
void setup() {
  pinMode(buttonPin1, INPUT_PULLUP);  
  pinMode(buttonPin2, INPUT_PULLUP);  
  Keyboard.begin();                   
}

void loop() {
  // Lee el estado del botón 1
  buttonState1 = digitalRead(buttonPin1);
  if (buttonState1 == LOW) {         
    Keyboard.press('Z');             
  } else {
    Keyboard.release('Z');            
  }

  // Lee el estado del botón 2
  buttonState2 = digitalRead(buttonPin2);
  if (buttonState2 == LOW) {         
    Keyboard.press('X');             
  } else {
    Keyboard.release('X');          
  }

  delay(10);  
}