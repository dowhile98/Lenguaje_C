/*ESTRUCTURAS DE CONTROL ALTERNATIVAS - SWITCH O IF-ELSE*/
/*INCLUIMOS DE FICHEROS*/
#include <stdio.h>                                          // #include <libreria del compilador>

/*DEFINIMOS NUESTRAS CONSTANTES Y VARIABLES GLOBALES*/

/*INICIAMOS LA FUNCIÓN MAIN*/
int main(void){

    /*DECLARAMOS UNA VARIABLE LOCALES*/
    int numero;
    int div2;
    int div3;

    /*LEER Y ESCRIBIR VALORES DE VARIABLES*/
    printf("Introduzca un numero entero: ");
    scanf("%i", &numero);                                   // scanf("%identificador", &variable);
    
    div2 = numero%2;
    div3 = numero%3;

    if ((div2==0)||(numero==0))
    {
        printf("El numero %i es par \n",numero);
        if((div3==0)||(numero==0))
        {
           printf("El numero %i es multiplo de 3 \n",numero); 
        }
        else
        {
            printf("El numero %i no es multiplo de 3 \n",numero);
        }
    }
    else
    {
        printf("El numero %i es impar \n",numero);
        
    }
    system("pause");
    return 0;
}