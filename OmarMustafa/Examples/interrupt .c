/*
 * sheet11.c
 *
 * Created: 2/21/2018 10:58:02 PM
 * Author : user 1
 */ 
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

int main(void)
{
	
	DDRA |=(1<<PA0) |(1<<PA1) |(1<<PA2) | (1<<PA3); //set pin A0&A1&A2&A3 as output 
	DDRB |=(1<<PB0);  //set pin B0 as output 
	DDRD &=~(1<<PD2); //set pin D2 as input for interrupt 
	
	MCUCR &=~(1<<ISC00) &~(1<<ISC01); // interrupt will occur when the input is low i.e. : ISC00 &ISC01=0
	GICR |=(1<<INT0); // activate first interrupt pin INT0
	
	sei(); //activate receiving interrupt requests
	
	//the main program body
	while (1)
	{
		for(int i=1;i<=8;i=i*2 ){
			PORTA=i;
		_delay_ms(1000);}
		PORTA=0;
		_delay_ms(250);
		for(int i=8;i>=1;i=i/2 ){
			PORTA=i;
		_delay_ms(1000);}
		PORTA=0;
	_delay_ms(250);}
	return 0;
}
//the interrupt body ( it occurs and the program will go back from it stops in main body)
ISR(INT0_vect){
	PORTA=0;
	_delay_ms(700);
	PORTB |=(1<<PB0);
	_delay_ms(500);
	PORTB &=~(1<<PB0);
	
	
}