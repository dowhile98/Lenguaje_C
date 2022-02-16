#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LENGTH_N    5
#define COLUMNA     4
#define FILA        3 

#define LENGTH(ARRAY)   (sizeof(ARRAY)/sizeof(*(ARRAY)))

//VARIABLES GLOBALES
int numeros[LENGTH_N];
float numerosReales[] = {1.2,4.5,0.1,0.2};
int matriz[FILA][COLUMNA];

extern int count;

char rxBuffer[100];
/**
 * @brief INGREAR EL CONTENIDO DEL ARRAY POR TECLADO
 * @return None 
 */
void ArrayRead(int *pArrr,int Len);


int main(void){
    //VARIABLES LOCALES
    for(int i=0; i<4; i++){
        printf("ELEMENTO [%d] = %.2f\n",i,numerosReales[i]);
    }

    //MODIFICAR EL CONTENIDO DE LA MATRIZ
    /*printf("INGRESAR LOS ELEMENTOS DE LA MATRIZ\n");
    for(int i=0; i<FILA;i++){
        for(int j=0; j<COLUMNA;j++){
            printf("elemento[%d][%d]",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }*/
    //printf("ELEMENTO 0: %d\n",*numeros);
    ArrayRead(numeros,LENGTH(numeros));                 //paso por referencia              
    //system("PAUSE");
    return 0;
}

/**
 * @brief INGREAR EL CONTENIDO DEL ARRAY POR TECLADO
 * @return None 
 */
void ArrayRead(int *pArrr,int Len){
    for(int i=0; i<Len;i++){
        printf("elemento[%d] = ",i);
        scanf("%d",pArrr);
        pArrr++;
    }
    return;
}