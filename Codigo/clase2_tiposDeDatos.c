/*INCLUIMOS DE FICHEROS*/
#include <stdio.h>
#include <stdint.h>     //Definicion de datos enteros

/*VARIABLES GLOBALES*/

/*INICIAMOS LA FUNCIÓN MAIN*/
int main(void){

    //*DECLARAMOS UNA VARIABLE LOCALES*/
    char a;
    short b;
    int c;
    unsigned int d;
    long e;
    float f;
    double g;
    int8_t h;
    uint8_t i;
    //*ASIGNAMOS VALORES A VARIABLE LOCALES*/
    a = 'e';                           //Variable tipo caracter (letra, simbolo o numero)
    printf("El elemento a es: %c\n",a);
    b = 32767;                        //Variable tipo pequeño 2 bytes (rango -32768 hasta 32767)
    printf("El elemento b es: %i\n",b);
    c = 2147483647;                     //Variable tipo entero 4 bytes (-2147483648 0 hasta 2147483647)
    printf("El elemento c es: %i\n",c);
    d = 2147483647;            //Variable entera sin signo 4 bytes (rango 0 hasta 2147483647)
    printf("El elemento d es: %i\n",d);
    e = 2147483647;                    //Variable tipo entero 4 bytes (-2147483648 0 hasta 2147483647)
    printf("El elemento e es: %li\n",e);
    f = 2147483647;                   //Variable tipo flotante 8 bytes (-2147483648 0 hasta 2147483647)
    printf("El elemento f es: %f\n",f);
    g = 2147483647;                  //Variable tipo double 8 bytes (-2147483648 0 hasta 2147483647)
    printf("El elemento g es: %lf\n",g);
    h = 127;                        //Variable entera sin signo 8 bites (rango -128 hasta 127)  
    printf("El elemento h es: %i\n",h);
    i = 255;                        //Variable entera sin signo 9 bites (rango 0 hasta 255)  
    printf("El elemento i es: %i\n",i);
    /*RETORNO DE LA FUNCION PRINCIPAL*/

    return 0;

}