/**
 * @file clase2_3.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-13
 * 
 * @copyright Copyright (c) 2022
 * se ingresa por teclado un numero entero de 4 digitos, mostrar numero
 * pero con los digitos invertidos
 * ejemplo: 1234
 * res = 4321
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

//char num[5];
int n;
int main(void){
    int r;          //resto
    int ni;         //numero invertido
/*    printf("\tINVERTIR UN NUMERO DE 4 DIGITOS\n");
    scanf("%s",&num);
    for(int i = 3;i>=0;i--){
        printf("%c",num[i]);
    }
    printf("\n");*/
    printf("\tINVERTIR UN NUMERO DE 4 DIGITOS\n");
    printf("ingrese numero de 4 digitos->");
    scanf("%d",&n);
    /*1 - 2 - 3  - 4-> 1234
      1000 * 1 + 2*100 + 3*10 + 4 = 123*/
    r = n % 10;     // r = 4
    n = n  / 10;    // n = 123
    ni = r * 10;

    r = n % 10;     // 3
    n = n / 10;
    ni = (ni + r)* 10;

    r = n % 10;
    n = n / 10;
    ni = (ni + r)*10 + n; //432
    printf("numero invertido->%d\n",ni);

    return 0;
}