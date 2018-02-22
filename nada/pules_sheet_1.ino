
int led = 9;
void setup() {
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
delay(500);
digitalWrite(led,Low);
delay(1500);
}
