#define F_CPU1000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

int main(void)
{
	
	DDRD&=~(1<<PD3);
	DDRD&=~(1<<PD2);
	PORTD|=((1<<PD2)|(1<<PD3));
	MCUCR|=((1<<ISC00)|(1<<ISC10));
	GICR|=((1<<INT0)|(1<<INT1));
	sei();
	DDRA=0b00001111;
	DDRB|=(1<<PB0);
	while (1)
	{
		
			PORTA=0b00000001;
			_delay_ms(500);
			PORTA=0b00000011;
			_delay_ms(500);
	}
	return 0;
}
ISR(INT0_vect )
{
PORTB^=(1<<PB0); 
}
ISR(INT1_vect)
{
PORTB^=(1<<PB0);
}
