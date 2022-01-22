/*inclusion de ficheros*/
#include <stdio.h>
#include <stdlib.h>
/*variables globales*/

/**
 * Encontrar la cantidad de numeros a partir de un intervalo ingresado
 * por teclado
 */

int main(void){
    int ni;
    int nf;
    int c = 0; /*cantidad de numeros en el intervalo*/
    printf("CANTIDAD DE NUMEROS EN UN INTERVALO [NI,NF]\n");

    //NI, NF (NI<NF)
    printf("INGRESE NI: ");
    scanf("%d", &ni);

    do{
        printf("INGRESE NF MAYOR A %d: ",ni);
        scanf("%d", &nf);
    }while(ni>nf);
    ni +=1;
    while(ni<nf){
        ni+=1;
        c+=1;
    }
    printf("NUMEROS EN EL INTERVALO[%d,%d] : %d\n",ni,nf,c);
    return 0;
}