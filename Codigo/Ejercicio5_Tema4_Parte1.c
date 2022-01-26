/*ESTRUCTURAS DE CONTROL ALTERNATIVAS - SWITCH O IF-ELSE*/
/*INCLUIMOS DE FICHEROS*/
#include <stdio.h>                                          // #include <libreria del compilador>

/*DEFINIMOS NUESTRAS CONSTANTES Y VARIABLES GLOBALES*/
#define precio 7
/*INICIAMOS LA FUNCIÓN MAIN*/
int main(void){

    /*DECLARAMOS UNA VARIABLE LOCALES*/
    int anios;
    float desc5;
    desc5 = 0.4*precio;                                     // descuento del 60%
    float desc60;                                                   
    desc60 = 0.45*precio;                                   // descuento del 55%
    float sindesc;
    sindesc = precio;
    /*LEER Y ESCRIBIR VALORES DE VARIABLES*/
    printf("Introduzca su edad: ");
    scanf("%i", &anios);                                    // scanf("%identificador", &variable);

    if(anios>0)
    {
        if (anios<5)
        {
            printf("Ud. obtiene un descuento del 60 porciento \n");
            printf("Solo debera pagar %.2f \n",desc5);
        }
        else if (anios>60)
        {
            printf("Ud. obtiene un descuento del 55 porciento \n");
            printf("Solo debera pagar %.2f \n",desc60);
        }
        else
        {
            printf("Ud debe pagar %.2f \n",sindesc);
        }
    }
    else
    {
        printf("Ud. introdujo una edad incorrecta \n");
    }
    system("pause");
    return 0;
}