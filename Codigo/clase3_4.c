#include <stdio.h>
#include <stdlib.h>

float Q = 1.6E-19;
int num = 100;
char nombre[100];
int main(void){
    printf("INGRESE NOMBRE COMPLETO->");
    scanf("%[^\n]",nombre);
    printf("su nombre es->%s bienvenido al curso\n",nombre);
    printf("CARGA DE UN ELECTRON->%e\n",Q);
    printf("\'HEX\'->0x%x\n",num);
    return 0;
}