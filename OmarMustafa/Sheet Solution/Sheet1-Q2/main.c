/*
 * sheet11.c
 *
 * Created: 2/21/2018 10:58:02 PM
 * Author : user 1
 */ 
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA=0b00001111;
    while (1) 
    {
		for(int i=1;i<=8;i=i*2  ){
			PORTA=i;
	_delay_ms(1000);}
		PORTA=0;
		_delay_ms(250);
		for(int i=8;i>=1;i=i/2  ){
			PORTA=i;
			_delay_ms(1000);}
		PORTA=0;
		_delay_ms(250);}
}

