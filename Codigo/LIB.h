
//#define __LIB_H
#ifndef __LIB_H  //IF NOT DEFINED
#define __LIB_H


#define     NUM     -20


//#define GPIOA_PRESENT

#ifndef GPIOA_PRESENT

void GPIOB_Init(void);

#endif // GPIOA_PRESENT

#ifdef GPIOA_PRESENT
void GPIOA_Init(void);

#endif  //GPIOA_PRESENT

void LCD_Init(void);


void Print_Num(void);

#endif // __LIB_H