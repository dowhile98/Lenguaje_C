/**
 * @file clase4_3.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-21
 * 
 * @copyright Copyright (c) 2022
 * Obtener la cantidad de los primeros N numeros multiplos de 5
 */
/*inclusion de ficheros*/
#include <stdio.h>
#include <stdlib.h>

/*variables globales*/

int main(void){
    int N;
    int M = 0;
    printf("INGRESE N: ");
    scanf("%d",&N);
    //se obtiene la cantidad de multiplos de 5
    /*for(int i=0;i<N;i++){
        if(i % 5 == 0){
            M += 1;
            printf("multiplo %d\n",i);
        }
    }*/
    for (int i = 0; i < N; i+=5)
    {
        /* code */
        printf("multiplo %d\n",i);
        M +=1;
    }
    puts("EL RESULTADO");
    printf("Cantidad de multiplos de 5 : %d\n",M);
    return 0;
}