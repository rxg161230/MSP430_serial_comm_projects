//#define led 13
#include <LiquidCrystal.h>
const int ledPin =  GREEN_LED;
const int ledPin1 = RED_LED;
int val;
int state;
LiquidCrystal lcd(P2_0, P2_1, P2_2, P2_3, P2_4, P2_5);

void setup() {
Serial.begin(9600);
lcd.begin(16, 2);
lcd.clear();
lcd.print("Hi EE/CE1202");
pinMode(ledPin, OUTPUT);
pinMode(ledPin1, OUTPUT);
digitalWrite(ledPin, LOW);
digitalWrite(ledPin1, LOW);
  
  
}

void loop() {
if (Serial.available() > 0)
{
val = Serial.read();

if (val == 1 && state ==0)
{
digitalWrite(ledPin, HIGH);
digitalWrite(ledPin1,LOW);
//lcd.setCursor(0,1);
lcd.clear();
lcd.print("GREEN LED ON");
state = 1;
//delay(150);
}
else if (val == 1 && state == 1)

{
digitalWrite(ledPin,LOW);
digitalWrite(ledPin1,LOW);
//lcd.setCursor(0,1);
//lcd.clear();
//lcd.print("G");

state = 0;
//delay(250);
}
else if (val == 2 && state ==0)
{
digitalWrite(ledPin1, HIGH);
digitalWrite(ledPin,LOW);
//lcd.setCursor(0,1);
lcd.clear();
lcd.print("RED LED ON");
state = 1;
//delay(150);
}
else if (val == 2 && state == 1)

{
digitalWrite(ledPin1,LOW);
digitalWrite(ledPin,LOW);
//lcd.setCursor(0,1);
//lcd.clear();
//lcd.print("G");
state = 0;
//delay(250);
}

else if (val == 3 && state ==0)
{
digitalWrite(ledPin1, HIGH);
digitalWrite(ledPin, HIGH);
//lcd.setCursor(0,1);
lcd.clear();
lcd.print("BOTH LEDs ON");
state = 1;
//delay(150);
}
else if (val == 3 && state == 1)
{
digitalWrite(ledPin,LOW);
digitalWrite(ledPin1,LOW);
//lcd.setCursor(0,1);
//lcd.clear();
//lcd.print("B");
state = 0;
//delay(250);
}


}
} 
