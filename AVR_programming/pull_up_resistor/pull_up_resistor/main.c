/*
 * pull_up_resistor.c
 *
 * Created: 31-01-2026 18:29:44
 * Author : DELL
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>



int main(void)
{
	
	DDRD &= ~(1<<DDD4);
	DDRB |= (1<<DDB5);
	
	while (1)
	{
		
		if(PIND & (1<<PIND4)){
			PORTB &= ~(1<< PORTB5);
			}else{
			PORTB |= (1<< PORTB5);
		}
		
	}
}
