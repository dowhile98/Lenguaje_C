#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define BANK1_SIZE              64*(1U<<20)
#define FSMC_BANK1_ADDRESS       0x60000000UL
#define N1_BASE_ADDRESS         (FSMC_BANK1_ADDRESS + 0x00000000)
#define N2_BASE_ADDRESS         (FSMC_BANK1_ADDRESS + BANK1_SIZE)
#define N3_BASE_ADDRESS         (FSMC_BANK1_ADDRESS + 2*BANK1_SIZE)
#define N4_BASE_ADDRESS         (FSMC_BANK1_ADDRESS + 3*BANK1_SIZE)

int main(int argc, char *argv){
    uint32_t Ax;
    uint32_t LCD_Address;
    uint32_t Nx;
    /*ingresar el numero de pin usado */
    printf("================================\n");
    printf("INTERFAZ FSMC\n");
    printf("BANK1_SIZE->0x%x\n", BANK1_SIZE);
    printf("N1_BASE_ADDRESS->0x%X\n", N1_BASE_ADDRESS);
    printf("N2_BASE_ADDRESS->0x%X\n", N2_BASE_ADDRESS);
    printf("N3_BASE_ADDRESS->0x%X\n", N3_BASE_ADDRESS);
    printf("N4_BASE_ADDRESS->0x%X\n", N4_BASE_ADDRESS);
    printf("\n================================\n");
    printf("Ingrese numeros [0-25] de acuerdo al pin A0-A25 usado.\n");
    do{
        printf("Ax->");
        scanf("%d", &Ax);
    }while(!(Ax>=0 && Ax<=25));
    printf("ingrese el  numero de banco usado.\n");
    do{
        printf("N1->1\nN2->2\nN3->3\nN4->4: ");
        scanf("%d", &Nx);
    }while(!(Nx>=1 && Nx<=4));
    switch (Nx)
    {
    case 1:
        LCD_Address = N1_BASE_ADDRESS + (((1U<<(Ax+1)) - 1U) & 0xFFFFFFFE);
        break;
    case 2:
        LCD_Address = N2_BASE_ADDRESS + (((1U<<(Ax+1)) - 1U) & 0xFFFFFFFE);
        break;
    case 3:
        LCD_Address = N3_BASE_ADDRESS + (((1U<<(Ax+1)) - 1U) & 0xFFFFFFFE);
        break;
    case 4:
        LCD_Address = N4_BASE_ADDRESS + (((1U<<(Ax+1)) - 1U) & 0xFFFFFFFE);
        break;
    default:
        printf("numero de banco ingresado incorrecto!!!\n");
        LCD_Address = 0;
        break;
    }
    
    printf("LCD ADDRESS->0x%X\n",LCD_Address);
    return 0;
}