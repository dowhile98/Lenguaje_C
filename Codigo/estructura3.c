#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*DEFINICION DE ESTRUCTURAS*/
typedef struct{
    char nombre[40];
    int numMovil;
}Telefono_t;

void modificarAarray(int *pArray);
extern float numerosReales[];

int main(void){
    Telefono_t alumnos[20];
    alumnos[0].numMovil = 2141;

    alumnos[1].numMovil = 22222;


    return 0;
}