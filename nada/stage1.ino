//motor right one
# define mr1_on 3
#define mr1_d1 2
#define mr1_d2 4

//motor right two
# define mr2_on 9
#define mr2_d1 10
#define mr2_d2 8

//motor left one 
# define ml1_on 5
#define ml1_d1 6
#define ml1_d2 7

//motor left two
#define ml2_on 11
#define ml2_d1 12
#define ml2_d2 13


void pause ()
{
  analogWrite(mr1_on,0);
  analogWrite(mr2_on,0);
  analogWrite(ml1_on,0);  
  analogWrite(ml2_on,0);
}
void forward ()
{
 analogWrite(mr1_on,100);
 analogWrite(mr2_on,100);
 analogWrite(ml1_on,100);  
 analogWrite(ml2_on,100);
 
digitalWrite(mr1_d1,HIGH);
digitalWrite(mr1_d2,LOW);

digitalWrite(mr2_d1,HIGH);
digitalWrite(mr2_d2,LOW);

digitalWrite(ml1_d1,HIGH);
digitalWrite(ml1_d2,LOW);

digitalWrite(ml2_d1,HIGH);
digitalWrite(ml2_d2,LOW);
}
void backward ()
{
analogWrite(mr1_on,100);
 analogWrite(mr2_on,100);
 analogWrite(ml1_on,100);  
 analogWrite(ml2_on,100);
 
digitalWrite(mr1_d1,LOW);
digitalWrite(mr1_d2,HIGH);

digitalWrite(mr2_d1,LOW);
digitalWrite(mr2_d2,HIGH);

digitalWrite(ml1_d1,LOW);
digitalWrite(ml1_d2,HIGH);

digitalWrite(ml2_d1,LOW);
digitalWrite(ml2_d2,HIGH);
}
//to move car right only motor left 2 will work 
void right ()
{
 analogWrite(ml2_on,100);
  analogWrite(mr1_on,0);
  analogWrite(mr2_on,0);
  analogWrite(ml1_on,0);
 digitalWrite(ml2_d1,HIGH);
 digitalWrite(ml2_d2,LOW);
}
//to move car left only motor right 2 will work
void left ()
{
analogWrite(mr2_on,100);
analogWrite(mr1_on,0);
analogWrite(ml1_on,0);
analogWrite(ml2_on,0);
digitalWrite(mr2_d1,HIGH);
digitalWrite(mr2_d2,LOW);
  
}
char action;
void setup() {

  pinMode(mr1_on,OUTPUT);
  pinMode(mr1_d1,OUTPUT);
  pinMode(mr1_d2,OUTPUT);
  
  pinMode(mr2_on,OUTPUT);
  pinMode(mr2_d1,OUTPUT);
  pinMode(mr2_d2,OUTPUT);
  
  pinMode(ml1_on,OUTPUT);
  pinMode(ml1_d1,OUTPUT);
  pinMode(ml1_d2,OUTPUT); 
   
  pinMode(ml2_on,OUTPUT);
  pinMode(ml2_d1,OUTPUT);
  pinMode(ml2_d2,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

if (Serial.available() >0)

  { 
      action= Serial.read(); 
  } 


if(action =='a')
pause();

if(action =='b')
forward();

if(action =='c')
backward();

if(action =='d')
right();

if(action =='e')
left();

delay(500);
}
