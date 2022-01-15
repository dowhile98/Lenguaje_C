/*INCLUIMOS DE FICHEROS*/
#include <stdio.h>
#include <stdint.h>     //Definicion de datos enteros

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
    long e = 2147483647;                    //Variable tipo entero 4 bytes (-2147483648 0 hasta 2147483647)
    printf("El elemento e es: %li\n",e);
    float f = 2147483647;                   //Variable tipo flotante 8 bytes (-2147483648 0 hasta 2147483647)
    printf("El elemento f es: %f\n",f);
    double g = 2147483647;                  //Variable tipo double 8 bytes (-2147483648 0 hasta 2147483647)
    printf("El elemento g es: %lf\n",g);
    int8_t h = 127;                        //Variable entera sin signo 8 bites (rango -128 hasta 127)  
    printf("El elemento h es: %i\n",h);
    uint8_t i = 255;                        //Variable entera sin signo 9 bites (rango 0 hasta 255)  
    printf("El elemento i es: %i\n",i);
    /*RETORNO DE LA FUNCION PRINCIPAL*/

    return 0;

}