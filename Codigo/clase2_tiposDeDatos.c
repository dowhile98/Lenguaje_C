/*INCLUIMOS DE FICHEROS*/
#include <stdio.h>

/*VARIABLES GLOBALES*/

/*INICIAMOS LA FUNCIÓN MAIN*/
int main(void){

    //*DECLARAMOS UNA VARIABLE LOCALES*/
    char a = 'e';                           //Variable tipo caracter (letra, simbolo o numero)
    printf("El elemento a es: %c\n",a);
    short b = 32767;                        //Variable tipo pequeño 2 bytes (rango -32768 hasta 32767)
    printf("El elemento b es: %i\n",b);
    int c = 2147483647;                     //Variable tipo entero 4 bytes (-2147483648 0 hasta 2147483647)
    printf("El elemento c es: %i\n",c);
    unsigned int d = 2147483647;            //Variable entera sin signo 4 bytes (rango 0 hasta 2147483647)
    
    printf("El elemento d es: %i\n",d);

    /*RETORNO DE LA FUNCION PRINCIPAL*/

    return 0;

}