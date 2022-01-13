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