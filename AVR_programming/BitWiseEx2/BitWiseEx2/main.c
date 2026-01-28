
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    
	DDRB |= (1 << DDB5) | (1 << DDB4); //PB3 as output
	
	
    while (1) 
    {
        // Set PB4 HIGH
        PORTB |= (1 << PORTB4);
        _delay_ms(2000);

        // Set  LOW
        PORTB &= ~(1<<PORTB4);
        _delay_ms(2000);

        // Set PB5 HIGH
        PORTB |= (1 << PORTB5);
        _delay_ms(2000);

        // Set  LOW
        PORTB &= ~(1<<PORTB5);
        _delay_ms(2000);

    }
}

