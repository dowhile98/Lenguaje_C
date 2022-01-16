#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
//se quiere en portb el bit 3=1 y el bit 6=0 //pinb verificar si el bit4==1 si es 1 entonces poner bit5==0 Y EL BIT 7=1 DE PORTB;
uint8_t PORTB=0b01110010;
uint8_t PINB=0b11011001;
int main(void){
//PORTB=PORTB & ~(1U<<6)|(1U<<3);
//	printf("PORTB->0x%x\n",PORTB);
	if(PINB & 1<<4){
		
		PORTB=PORTB & ~(1U<<5)|(1U<<7);
		
			printf("PORTB->0x%x\n",PORTB);
	}
	return 0;
}
