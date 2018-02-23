#include <avr/io.h>
#include <util/delay.h>
#define F_CPU1000000LU
int main(void)
{
	DDRB|=(1<<PB2)|(1<<PB1);
    TCCR1A|=(1<<COM1A0)|(1<<COM1B0)|(1<<WGM10);
	TCCR1B|=(1<<CS10);
	while (1) 
    {
		if (PINC&(1<<PC0))
			{
				OCR1A=60;
			}
		else if (PINC&(1<<PC1))
			{
				OCR1A=125;
			}
		else if (PINC=0)
		{
			OCR1A=255;
		}	
		_delay_ms(10);
    }
}

