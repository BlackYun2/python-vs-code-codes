#include<avr/io.h>
#include<util/delay.h>
// DDR TOGGLE INPUT OR OUTPUT
//PORT OUTPUT
//BIN INPUT
#define SET_BIT(REG,BIT) REG|=(1<<BIT)
#define CLR_BIT(REG,BIT) REG&=~(1<<BIT)
#define GET_BIT(REG,BIT) ((REG>>BIT) & 1)

#define TOGGLE_BIT(REG,BIT) REG^=(1<<BIT) // ^ means XOR


int main()
{
	
	DDRC |=(1<<7);
	while(1)
	{
		SET_BIT(PORTC,7);
		_delay_ms(500);
		CLR_BIT(PORTC,7);
		_delay_ms(500);
	}
	return 0;
}
