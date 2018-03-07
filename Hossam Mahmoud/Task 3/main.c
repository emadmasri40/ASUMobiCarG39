/*
 * Task3.c
 *
 * Created: 3/5/2018 8:20:34 PM
 * Author : Administrator
 */ 

#include <avr/io.h>
#include <avr/delay.h>


uint8_t sum(uint8_t a, uint8_t b)
{
	return a+b;
}

uint8_t sub(uint8_t a, uint8_t b)
{
	return a-b;
}





int main(void)
{
   int a=5, b=7;
    DDRA = 0xff;
	
	while (1)
	{
		PORTA= a&b;
	}

	return 0;

}



