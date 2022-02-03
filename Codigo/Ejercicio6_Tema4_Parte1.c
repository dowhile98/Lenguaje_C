/*ESTRUCTURAS DE CONTROL ALTERNATIVAS - SWITCH O IF-ELSE*/
/*INCLUIMOS DE FICHEROS*/
#include <stdio.h>                                          // #include <libreria del compilador>

/*DEFINIMOS NUESTRAS CONSTANTES Y VARIABLES GLOBALES*/

/*INICIAMOS LA FUNCIÓN MAIN*/
int main(void){

    /*DECLARAMOS UNA VARIABLE LOCALES*/
    float numero;
    float resultado;
    /*LEER Y ESCRIBIR VALORES DE VARIABLES*/
    printf("Introduzca un numero: ");
    scanf("%f", &numero);                                  // scanf("%identificador", &variable);

    if(numero>0)
    {
        resultado = (numero*numero)+(2*numero);
        printf("f(x) es igual a: %.2f\n",resultado);
    }
    else if(numero<=0)
    {
        resultado = numero + 3;
        printf("f(x) es igual a: %.2f\n",resultado);
    }
    else
    {
        printf("No haz ingresado un numero");
    }
    system("pause");
    return 0;
}