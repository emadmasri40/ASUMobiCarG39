

#include <avr/io.h>
#include <util/delay.h>
int sum (int8_t a, int8_t b)
{
	int8_t c;
	c=a+b;
	return c;
}
int main(void)
{
	int8_t c;
	DDRA = 0b11111111;
    /* Replace with your application code */
    while (1) 
    {
		c=sum(18,15);
		PORTA=c;
    }
}

