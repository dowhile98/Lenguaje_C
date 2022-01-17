#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint8_t PORTB = 0x80;  //0b00000000 (0-255)
uint8_t PINB = 1U<<5;   //PB5 -> (entrada)
uint8_t stateButton;

int main(void){
    PORTB = PORTB | 1U<<7 | 1U<<2 | 1U<<1; //0b1000 0110 0x86
    printf("PORTB->0x%x\n",PORTB);
    //PORTB = PORTB &  0b11111011; PORTB &= 0xFB
    PORTB = PORTB & ~(1U<<2);       //PORTB &=~(1U<<2)
    printf("PORTB->0x%x\n",PORTB);
    //stateButton = PINB & 1U<<5;     //0b00100000 == 0x20
    stateButton = (PINB & 1U<<5)>>5;  //0b00000001
    if (stateButton)
    {
        /* code */
        printf("BUTTON STATE-> 0x%x\n",stateButton);

    }
    else{
        printf("BUTTON STATA-> 0x%x\n",stateButton);
    }
    
    return 0;
}