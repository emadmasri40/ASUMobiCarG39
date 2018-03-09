

#include <avr/io.h>
#include <util/delay.h>
int sum (uint8_t a, uint8_t b)
{
	uint8_t c;
	c=a+b;
	return c;
}
int subtract (uint8_t a, uint8_t b)
{
	int8_t c;
	c=a-b;
	return c;
}

int main(void)
{
	
}


