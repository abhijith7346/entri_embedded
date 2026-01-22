/*
 * AVR_Blink.c
 *
 * Created: 22-01-2026 21:31:16
 * Author : DELL
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    
	DDRB = 0b00001000; //PB3 as output
	
	
    while (1) 
    {
		PORTB = 0b00001000; // PB3 = HIGH
		_delay_ms(1000); 
		PORTB = 0b00000000;
		_delay_ms(1000);
    }
}

