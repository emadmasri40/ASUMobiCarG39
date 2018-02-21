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
		
		PORTA=1;
		_delay_ms(500);
		
		PORTA=0;
		_delay_ms(2000);
		
}

}