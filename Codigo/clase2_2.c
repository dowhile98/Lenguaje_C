#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int n,m;
float r,f;
float res;
int8_t a = 1, c= 3, b = 1;
int main(void){

    printf("\tOPERACIONES MATEMATICAS\n");
    printf("ingrese dos numeros enteros\n");
    scanf("%d%d",&n,&m);
    printf("ingrese dos numeros reales\n");
    scanf("%f%f",&r,&f);
    //operadore relacionales y logicos
    if ((((a + b) > c) || (c < 0))  &&  (((a + b) > c) || a))
    {
        printf("VERDADERO\n");
    }else{
        printf("Falso\n");
    }
    n += 10;
    
    /*operaciones matematicas*/
    res = (float)n/m;
    printf("RES1->%.2f\n",res);
    res = (int)(r/f);
    printf("RES2->%.2f",res);
    return 0;
}