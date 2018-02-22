#include <avr/io.h>
#include <util/delay.h>
#define F_CPU1000000LU
int main (void){
	
	DDRA=1;
	while(1){
		
		PORTA=1;
		_delay_ms(500);
		PORTA=0;
		_delay_ms(1500);
	}
	return 0;
}