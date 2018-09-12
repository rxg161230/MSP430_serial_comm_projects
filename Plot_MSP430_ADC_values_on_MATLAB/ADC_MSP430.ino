void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly: 
  int potValue;
  potValue = analogRead(A0);
  int value1 = map(potValue, 0, 1023, 0, 127);
  int value2 = map(potValue, 0, 1023, 0, 15);
  int value3 = map(potValue, 0, 1023, 0, 1023);
  
  Serial.println(value1);
  Serial.println(value2);
  Serial.println(value3);
}
