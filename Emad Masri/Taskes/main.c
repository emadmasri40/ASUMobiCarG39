/*
 * task3.c
 *
 * Created: 25-Feb-18 11:51:21 PM
 * Author : Emad
 */ 
#define F_CPU 1000000UL
#include <avr/io.h>

void convert (uint8_t m)
{
	uint8_t i,n,a[8];
	n=m;
	for (i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	
	for (i-1;i>=0;i--)
	{
		PORTA|=(a[i]<<i);
	}
}
void opre (uint8_t A,uint8_t B,char op)
{
	if (op=='+')
	{
		convert(A+B);
	}
	else if (op=='-')
	{
		convert(A-B);
	}
	else if (op=='|')
	{
		PORTA=A|B;
	}
	else if (op=='&')
	{
		PORTA=A&B;
	}
}
int main(void)
{
	DDRA=0xff;
uint8_t n=5,m=9;
    /* Replace with your application code */
    while (1) 
    {
		//opre(n,m,'|');
		PORTA=n-m;
		
    }
}

