/*
 * sheet_soln_Q2.c
 *
 * Created: 2/20/2018 7:35:16 PM
 *  Author: Tasneem
 */ 


#define F_CPU 1000000UL
#include <avr/io.h>
#include <avr/delay.h>
int main(void)
{
	DDRA = 0b11110000;
	while(1)
	{
		PORTA = 0b00010000;
		_delay_ms(1000);
		PORTA = 0b00000000;
		_delay_ms(1000);
		PORTA = 0b00100000;
		_delay_ms(1000);
		PORTA = 0b00000000;
		_delay_ms(1000);
		PORTA = 0b01000000;
		_delay_ms(1000);
		PORTA = 0b00000000;
		_delay_ms(1000);
		PORTA = 0b10000000;
		_delay_ms(1000);
		PORTA = 0b00000000;
		_delay_ms(1000);
			PORTA = 0b10000000;
			_delay_ms(1000);
			PORTA = 0b00000000;
			_delay_ms(1000);
			PORTA = 0b01000000;
			_delay_ms(1000);
			PORTA = 0b00000000;
			_delay_ms(1000);
			PORTA = 0b00100000;
			_delay_ms(1000);
			PORTA = 0b00000000;
			_delay_ms(1000);
			PORTA = 0b00010000;
			_delay_ms(1000);
			PORTA = 0b00000000;
			_delay_ms(1000);
	}
	return 0;
}