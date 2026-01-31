
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#define DELAY_TIME 2000


void delayFun(int value){
	_delay_ms(DELAY_TIME*1);
}

void stop(){
PORTB &= ~(1<<PORTB4);
PORTB &= ~(1<<PORTB5);
delayFun(2000);	
}

void clockwise(){
 PORTB |= (1 << PORTB5);
 PORTB &= ~(1<<PORTB4);
 delayFun(2000);
}

void counterClockwise(){
PORTB |= (1 << PORTB4);
PORTB &= ~(1<<PORTB5);
delayFun(2000);	
}



int main(void)
{
    
	DDRB |= (1 << DDB5) | (1 << DDB4); 
	
    while (1) 
    {
        clockwise();
		stop();
		counterClockwise();
		stop();
    }
	
}
