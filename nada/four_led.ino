int counter;

void setup()
{
  pinMode(4, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);

}

void loop()
{
for(int c=4;c<8;c++)
 {
 digitalWrite(c, HIGH);
 delay(1000);
 digitalWrite(c, LOW);
 delay(1000);

 }
}
