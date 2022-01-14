/*DEFINIMOS NUESTRAS LIBRERIAS*/
#include <stdio.h>          // #include <libreria del compilador>

/*DEFINIMOS NUESTRAS CONSTANTES*/
#define PI 3.14159          // Primer método para definir constantes
const float PPI=3.1416;     // Segundo método para definir constantes

/*INICIAMOS LA FUNCIÓN MAIN*/
int main(void){

    /*DECLARAMOS UNA VARIABLE LOCALES*/
    float radio;
    float area;

    /*LEER Y ESCRIBIR VALORES DE VARIABLES*/
    printf("Introduzca el valor del \"radio\": ");
    scanf("%f", &radio);      // scanf("%identificador", &variable);
    area = PI*radio*radio;

    printf("El valor del \"radio\" introducido es: %f \n",radio);
    printf("El \"area\" es: %f \n",area);

    system("PAUSE");
    return 0;
}
