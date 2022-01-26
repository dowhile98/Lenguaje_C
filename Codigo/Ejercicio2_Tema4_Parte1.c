/*ESTRUCTURAS DE CONTROL ALTERNATIVAS - SWITCH O IF-ELSE*/
/*INCLUIMOS DE FICHEROS*/
#include <stdio.h>                                          // #include <libreria del compilador>

/*DEFINIMOS NUESTRAS CONSTANTES Y VARIABLES GLOBALES*/

/*INICIAMOS LA FUNCIÓN MAIN*/
int main(void){

    /*DECLARAMOS UNA VARIABLE LOCALES*/
    int numero1;
    int numero2;
    int residuo;

    /*LEER Y ESCRIBIR VALORES DE VARIABLES*/
    printf("Introduzca dos numero enteros: ");
    scanf("%i %i", &numero1, &numero2);                     // scanf("%identificador", &variable);
    
    residuo = numero1%numero2;

    if (residuo==0)
    {
        printf("El numero %i es divisible entre %i \n",numero1,numero2);
    }
    else
    {
        printf("El numero %i no es divisible entre %i \n",numero1,numero2);
        printf("Su residuo es: %i \n",residuo);
    }
    system("pause");
    return 0;
}