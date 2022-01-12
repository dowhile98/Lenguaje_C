/*inclusion de ficheros*/
#include <stdio.h>
#include <stdlib.h>
/*variables globales*/

//<tipo de dato> <nombre de la variable> <valor(opcional)>
int num1;               //se crea en la memoria ram
int num2;
float pi = 3.14;


/*funcion principal*/
int main(void){
    /*variable local*/
    int num3 = 4;          //stack (heap memory)


    printf("CLASE 1 - LENGUAJE C\n");
    printf("Estructura del lenguaje C\n");
    num1 = (int)pi;

    printf("NUMERO 1-> %d\n",num1);
    printf("NUMERO 3-> %d\n",num3);

    
    
    /*retorno de la funcion*/
    return 0;
}