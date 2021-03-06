#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*DEFINICION DE ESTRUCTURAS*/
typedef struct{
    char nombre[40];
    int numMovil;
}Telefono_t;

typedef struct{
    char login[40];
    char email[40];
}Correo_t;

typedef struct{
    Telefono_t telefono;
    Correo_t correo;
}Usuario_t;

void MostrasDatosUsuario(Usuario_t pUsuario);

static int stateButton; //no es accesible desde otro archivo

int count;

int main(void) {

    Usuario_t pepe = {0};
    Usuario_t usuarios[10];
    /*strcpy(pepe.telefono.nombre,"Pepito")*/;
    pepe.telefono.numMovil = 9999;
    //strcpy((char*)&(pepe.correo.login),"PEPITO20");
    //strcpy(pepe.correo.email,"pepe@example");

    
    sprintf(pepe.telefono.nombre,"Pepito");
    sprintf(pepe.correo.email,"pepe@example");
    sprintf(pepe.correo.login,"PEPITO20");
    MostrasDatosUsuario(pepe);
    MostrasDatosUsuario(pepe);
    MostrasDatosUsuario(pepe);
    MostrasDatosUsuario(pepe);
    MostrasDatosUsuario(pepe);
    system("PAUSE");
    return 0;
}

void MostrasDatosUsuario(Usuario_t pUsuario){
    static int count = 0;                   //solo se inicializan una sola vez
    printf("NOMBRE: %s\nTelefono: %d\n",pUsuario.telefono.nombre,pUsuario.telefono.numMovil);
    
    printf("Login: %s\nEmail: %s\n",pUsuario.correo.login,pUsuario.correo.email);
    count++;
    printf("numero de ejecuciones de la funcion->%d\n\r",count);
    return;
}