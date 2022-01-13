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
 * res = 4321*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void){

int num,u,d,c,m;

printf("Digite un numero ");
scanf("%d",&num);


u=(((num%1000)%100)%10);
d=(((num%1000)%100)/10);
c=((num%1000)/100);
m=(num/1000);

printf("El numero inverso es %d%d%d%d ",u,d,c,m);

    system("pause");
}
