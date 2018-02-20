/*
 * sheet_soln_1.c
 *
 * Created: 2/20/2018 7:04:09 PM
 *  Author: Tasneem
 */ 

#define F_CPU 1000000UL
#include <avr/io.h>
#include <avr/delay.h>
int main(void)
{
	DDRA = 0b00000001;
	while(1)
	{
		PORTA = 0b00000001;
		_delay_ms(500);
		PORTA = 0b00000000;
		_delay_ms(2000);
	}
	return 0;
}