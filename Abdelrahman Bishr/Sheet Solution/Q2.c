#include <avr/io.h>
#include <util/delay.h>
#define F_CPU1000000LU
int main(void)
{
	DDRA=0xf0;
	   while (1) 
    {
		
		for (uint8_t i=4;i<=7;i++){
		PORTA|=(1<<i);
		_delay_ms(1000);
		PORTA=0;
		};
		
    }
	return 0;
}

