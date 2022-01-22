#include <stdio.h>
#include <stdlib.h>
#include "TEST.h"
#include "LIB.h"

#define mostrar_mumero    Print_Num
#define SUM(X)      (X+X \
                     + 20 \
                     - 30)


int sum;
void Print_Num(void){
#if NUM>10
printf("numero es->%d es mayor que 10\n", NUM);
#else
printf("numero es->%d es menor que 10\n", NUM);
#endif

}

int main(void){
    test();
    mostrar_mumero();
    sum = SUM(20);
    printf("suma %d\n",sum);
    return 0;
}

