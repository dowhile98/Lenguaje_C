/*INCLUIMOS DE FICHEROS*/
#include <stdio.h>
#include <stdlib.h>

/*VARIABLES GLOBALES*/
int num1;                                   // Se crea en la memoria ram
int num2;
float pi = 3.14;


/*INICIAMOS LA FUNCIÓN MAIN*/
int main(void){

    //*DECLARAMOS UNA VARIABLE LOCALES*/
    int num3 = 4;                           //stack (heap memory)

    printf("CLASE 1 - LENGUAJE C\n");
    printf("Estructura del lenguaje C\n");


    num1 = (int)pi;                         // num1 = entero de pi = 3

    printf("NUMERO 1-> %d\n",num1);
    printf("NUMERO 3-> %d\n",num3);

    
    
    /*RETORNO DE LA FUNCION PRINCIPAL*/
    return 0;
}