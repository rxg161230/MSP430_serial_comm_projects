//#define button 13
int buttonState = 0;
int buttonState1= 0;
int buttonState2= 0;
//const int ledPin =  GREEN_LED;
//const int ledPin1 = RED_LED;
void setup() {
Serial.begin(9600);
pinMode(10, INPUT_PULLUP);
pinMode(9, INPUT_PULLUP);
pinMode(8, INPUT_PULLUP);
//pinMode(ledPin, OUTPUT);
//pinMode(ledPin1, OUTPUT);
//digitalWrite(ledPin, LOW);
//digitalWrite(ledPin1, LOW);

}

void loop() {
buttonState = digitalRead(10);
buttonState1 = digitalRead(9);
buttonState2 = digitalRead(8);
if (buttonState == HIGH)
{
Serial.write(1);
//digitalWrite(ledPin, HIGH);
//digitalWrite(ledPin1,LOW);
//delay(500);
}
//delay(100);

else 
{
}
if (buttonState1 == HIGH)
{
  Serial.write(2);
 // digitalWrite(ledPin1, HIGH);
 // digitalWrite(ledPin,LOW);
  //delay(500);
}
//delay(100);
else 
{
}
if (buttonState2 == HIGH)
{
  Serial.write(3);
 // digitalWrite(ledPin1, HIGH);
 // digitalWrite(ledPin, HIGH);
  //delay(500);

}
}
  




