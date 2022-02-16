#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(void){
    int numElements;
    int *nums;
    /*se desea crear un array que la cantidad de elementos 
    se ingrese por teclado*/
    printf("INGRESE LA CANTIDAD DE ELEMENTOS->");
    scanf("%d",&numElements);
    //creamos la matriz dinamica
    nums = (int*)malloc(numElements*sizeof(int)); //arreglo dinamico

    //limpiar la memoria 
    free(nums);

    return;
}