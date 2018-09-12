const int buttonPin = PUSH2; 

//Variable will change:
int buttonState = 0;         // current state of the button


// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(P2_0, P2_1, P2_2, P2_3, P2_4, P2_5);

void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
  lcd.begin(16, 2);
  //digitalWrite(buttonPin, LOW);
  
  
}

void loop() {
     
   // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  
  // check if the pushbutton is pressed.
  // if it is, the button State is HIGH:
  if (buttonState == HIGH) 
  {   
      // Print a message to the LCD.
  lcd.clear();
  // set up the LCD's number of columns and rows:
  lcd.setCursor(0,0);
  lcd.print("Hey Guys!");
  delay (500);    
  
  } 
  else {
    // scroll 13 positions (string length) to the left 
  // to move it offscreen left:
  lcd.clear();
  lcd.print("CE/EE 1202 Rocks");
    delay(500);
  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft(); 
    // wait a bit:
    delay(500);
  }

  // scroll 29 positions (string length + display length) to the right
  // to move it offscreen right:
  for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight(); 
    // wait a bit:
    delay(500);
  }
  
      }
  
  // delay at the end of the full loop:
  //delay(500);  
  
  
   }



