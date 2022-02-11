#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*definir la estructura*/
typedef struct {
    char nombre[40];
    int edad;
    int ciclo;
}Alumno;

void MostrasDatosAlumno(Alumno *pAlumno);



int main(void){
    /*declarar variables de tipo puntero*/
    Alumno pepe = {"Pepe",24,4};
    Alumno juan;
    strcpy(juan.nombre,"Juan");
    juan.edad = 30;
    juan.ciclo = 9;
    
    MostrasDatosAlumno(&pepe);
    MostrasDatosAlumno(&juan);
    
    
    return 0;
}

void MostrasDatosAlumno(Alumno *pAlumno){
    printf("Nombre: %s\n",pAlumno->nombre);
    printf("Edad: %d\n",pAlumno->edad);
    printf("ciclo: %d\n",pAlumno->ciclo);

    return;
}