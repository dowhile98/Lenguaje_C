#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*PORB: bit3 = 1, bit6 = 0*/
/*PINB: Verificar si bit4 ==1
  *entonces poner PORTB: bit7 = 1 y bit5 = 0
  *sino se cumple poner PORTB: bit0 = 1 y bit1 = 0*/
uint8_t PORTB = 0b01110010;  //0b00000000 (0-255)
uint8_t PINB = 0b11011001;


uint8_t stateButton;

int main(void){
  printf("PORTB->0x%x\n",PORTB);
  //PORTB -> bit6 = 0
  PORTB &=~ (1U<<6);    //0b01110010 ->0b00110010
  printf("PORTB->0x%x : bit6 = 0\n",PORTB);
  //PORTB-> bit3 = 1
  PORTB |= 1U<<3;       //0b00110010 ->0b00111010
  printf("PORTB->0x%x : bit3 = 1\n",PORTB);
  //Verificar el bit4
  stateButton = (PINB>>4U) & 0x1U;
  printf("BUTTON STATE-> 0x%x\n",stateButton);
  if(stateButton){
    //PORTB->bit7 = 1
    PORTB |= 1U<<7;     //0b00110010 ->0b10111010
    printf("PORTB->0x%x : bit7 = 1\n",PORTB);
    //PORTB->bit5 = 0
    PORTB &=~ (1U<<5);  //0b00110010 ->0b10011010
    printf("PORTB->0x%x : bit5 = 0\n",PORTB);
  }else{
    //PORTB->bit0 = 1
    PORTB |= 1U;        //0b00110010 ->0b10011011
    printf("PORTB->0x%x : bit0 = 1\n",PORTB);
    //PORTB->bit1 = 0
    PORTB &=~ (1U<<1); //0b00110010 ->0b10011001
    printf("PORTB->0x%x : bit1 = 0\n",PORTB);
  }
  return 0;
}