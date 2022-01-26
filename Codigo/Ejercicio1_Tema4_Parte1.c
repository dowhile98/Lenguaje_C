/*ESTRUCTURAS DE CONTROL ALTERNATIVAS - SWITCH O IF-ELSE*/
/*INCLUIMOS DE FICHEROS*/
#include <stdio.h>          // #include <libreria del compilador>

/*DEFINIMOS NUESTRAS CONSTANTES*/

/*INICIAMOS LA FUNCIÓN MAIN*/
int main(void){

    /*DECLARAMOS UNA VARIABLE LOCALES*/
    int numero;

    /*LEER Y ESCRIBIR VALORES DE VARIABLES*/
    printf("Introduzca un numero entero: ");
    scanf("%i", &numero);      // scanf("%identificador", &variable);
    


    
    if (numero>100)
    {
        /* code */
        printf("El valor del numero introducido es: %i \n",numero);
        printf("El numero es mayor a 100 \n");
    }
    else if (numero<100)
    {
        printf("El valor del numero introducido es: %i \n",numero);
        printf("El numero introducido es menor a 100 \n");
    }
    else
    {
        printf("El numero introducido es 100 \n");
    }

    system("pause");
    return 0;
}