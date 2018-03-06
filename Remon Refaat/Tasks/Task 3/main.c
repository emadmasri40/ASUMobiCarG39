#define F_CPU 1000000UL
#include <stdio.h>
#include <avr/io.h>
#include <avr/delay.h>
uint8_t Sum(uint8_t A,uint8_t B)
{
	uint8_t Res;
	Res=A+B;
	return  Res;
}
uint8_t Sub(uint8_t A,uint8_t B)
{
	uint8_t Result;
	if (A>B)
	{
		Result= A - B ;
	}
	else
	{
		B=~B;
		Result= A + B +1 ;
	}
	return Result;
}
int main(void)
{
	uint8_t A,B,R,C;
	DDRA = 0xFF;
	while(1)
	{
		A=17;
		B=100;
		R=Sum(A,B);
		C=Sub(A,B);
		PORTA = R;
		_delay_ms(2000);
		PORTA = C;
		_delay_ms(2000);
	}
	return 0;
}