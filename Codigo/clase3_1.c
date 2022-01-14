#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>




int main(void){
    int num = 10;
    int *ptrNum = NULL;//el puntero apunta a la direccion de memoria num NULL
    int *ptr2 = (int *)0X0061FF14;
    printf("ptrNum->%p\n",ptrNum);
    ptrNum = &num;

    printf("EL NUMERO ES->%d\n",num);
    *ptrNum = 20;
    printf("ptrNum->%p\n",ptrNum);
    printf("ptrNum->%p\n",&num);
    printf("EL NUMERO ES->%d\n",num);
    *ptr2 = 30;
    printf("EL NUMERO ES->%d\n",num);
    return 0;
}