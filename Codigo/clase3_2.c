#include <stdio.h>
#include <stdlib.h>
/*Escriba un programa en el que se declare una variable de tipo entero y se le asigne un
valor. El programa debe mostrar el valor de la variable y la dirección de memoria en la
que se almacena.*/
int main(void){
    int num = 20;
    int *ptrNum = NULL; //no apunta a ninguna direccion
    /*ptrNUm -> num*/
    ptrNum = &num;
    *ptrNum = 30;       //se modifica el valor de num
    //scanf("%d",(int*)0x0061FF18);
    /*resultado*/
    printf("VALOR DE NUMERO->%d\n",num);
    printf("DIRECCION DE MEM->%p\n",ptrNum);
    system("PAUSE");
    return 0;
}
    