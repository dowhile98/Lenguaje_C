/*ESTRUCTURAS DE CONTROL ALTERNATIVAS - SWITCH O IF-ELSE*/
/*INCLUIMOS DE FICHEROS*/
#include <stdio.h>                                          // #include <libreria del compilador>

/*DEFINIMOS NUESTRAS CONSTANTES Y VARIABLES GLOBALES*/

/*INICIAMOS LA FUNCIÓN MAIN*/
int main(void){

    /*DECLARAMOS UNA VARIABLE LOCALES*/
    int numero1;
    int numero2;

    /*LEER Y ESCRIBIR VALORES DE VARIABLES*/
    printf("Introduzca dos numeros enteros: ");
    scanf("%i %i", &numero1, &numero2);                    // scanf("%identificador", &variable);

    if (numero1>numero2)
    {
        printf("El numero %i es mayor que %i \n",numero1,numero2);
    }
    else if (numero2>numero1)
    {
        printf("El numero %i es mayor que %i \n",numero2,numero1);
        
    }
    else
    {
        printf("Los numeros son iguales \n");
    }
    system("pause");
    return 0;
}