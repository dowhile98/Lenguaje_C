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

/*VARIABLES GLOBALES*/
int array[5] = {0,1,2,3,4};

/*PROTOTIPO*/
/**
  * @fn 	Multiplicacion
  * @brief 	multiplicacion de 3 numeros
  * @param [a]: primer numero a multiplicar
  * @param [b]:
  * @param [c]:
  * @return r: resultado de la multiplicacion
  * @note:
  *
  */
int Multiplicacion(int a, int b, int c);
/**
 * @brief Paso por valor
 */
void PasoPorValor(int n);
/**
 * @brief paso por referencia
 * 
 */
void PasoPorReferencia(int *n);

/**
 * @brief leer un vector de n elementos
 * 
 */
void LeerArray(int *pArray,int Size);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void MostrarArray(const int *pArray,int Size);


int main(void) {
    /*variables locales*/
    int mult;
    int n = 10;
    /*instrucciones*/
    printf("funcion que multiplica 3 numeros\n");
	mult = Multiplicacion(0,5,6);
    printf("MULTIPLICACION->%d\n", mult);
	mult = Multiplicacion(1,1,3);
	printf("MULTIPLICACION->%d\n", mult);
	mult = Multiplicacion(10,2,30);
	printf("MULTIPLICACION->%d\n", mult);
    /*PASO POR VALOR*/
    printf("antes de la funcion PasoPorValor->%d\n",n);
    PasoPorValor(n);
    printf("despues de la funcion PasoPorValor->%d\n",n);
    /*PASO POR REFRENCIA*/
    printf("\nantes de la funcion PasoPorReferencia->%d\n",n);
    PasoPorReferencia(&n);
    printf("despues de la funcion PasoPorReferencia->%d\n",n);
    /*LEER Y MOSTRAR UN ARRAY*/
    //leer
    LeerArray(array,5);
    //mostrar
    MostrarArray(array,5);

	return 0;
}

/*DEFINICION DE FUNCIONES*/

int Multiplicacion(int a, int b, int c){
    if(a == 0 || b == 0 || c == 0){
        printf("la multiplicacion da cero!!!!!!!\n");
        return 0;
    }
    else if(a == 1 || b == 1){
        printf("la multiplicacion da-> %d!!!!!!!\n",c);
        return c;
    }
        
    /*variables locales*/
    int mult;
    /*la lista de instrucciones*/	
    mult = a * b * c;
    printf("la multiplicacion NO da cero!!!!!!!\n");
    /*retorno de la funcion*/
    return mult;
}

/**
 * @brief Paso por valor
 */
void PasoPorValor(int n){
    printf("el parametro pasado tiene->%d\n",n);
    n = 100;
    printf("el nuevo valor de n->%d\n",n);
    return;
}
/**
 * @brief paso por referencia
 * 
 */
void PasoPorReferencia(int *n){
    printf("el parametro pasado tiene->%d\n",*n);
    *n = 100;
    printf("el nuevo valor de n->%d\n",*n);
    return;
}


/**
 * @brief leer un vector de n elementos
 * 
 */
void LeerArray(int *pArray,int Size){
    /*Variable local*/
    int i = 0;      //interrador
    printf("\nIngresar %d elementos del array:\n",Size);
    while(Size-->0){    //Size-- -> = Size = Size - 1;
                        //--Size -> = Size = Size - 1;
        printf("elemento[%d]: ",i);
        scanf("%d",&pArray[i]);
        //scanf("%d",pArray++);
        i++;
    }
    return;
}
void MostrarArray(const int *pArray,int Size){
    printf("\nElementos del array\n");
    for(int i = 0;i<Size;i++){
        //if(i == 3)
        //    break;
        printf("elemento[%d]->%d\n",i,pArray[i]);
    }
    return;
}