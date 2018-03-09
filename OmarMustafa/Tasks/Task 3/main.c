/*
 * task 3.c
 *
 * Created: 2/27/2018 04:25:12 PM
 * Author : user 1
 */ 
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
void sum(unsigned int a,unsigned int b){
	DDRA=0xff;
	PORTA=a+b;
}
void sub(unsigned int a,unsigned int b){
	DDRA=0xff;
	PORTA=a-b;
}
void NOT(unsigned int a){
	DDRA=0xff;
	PORTA=255-a;
	}
void OR(unsigned int a, unsigned int b){
	DDRA=0xff;
	for (int i=0;i<=7;i++){
		if((a%2==1)|(b%2==1))PORTA |= 1<<i;
		a=a/2;b=b/2;}
}
void AND(unsigned int a, unsigned int b){
	DDRA=0xff;
	for (int i=0;i<=7;i++){
		if((a%2==1)&(b%2==1))PORTA |= 1<<i;
		a=a/2;b=b/2;
		}
}
int main(void)
{
  // sum(8,10);
  // sub(4,9);
 //  NOT(15); 
  OR(9,12);
   //AND(15,14);
}

