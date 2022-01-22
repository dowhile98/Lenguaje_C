/*inclusion de ficheros*/
#include <stdio.h>
#include <stdlib.h>
/*variables globales*/
int n;
int mayor = 0;
int menor = 0;
int i = 1;          //iterador
int main(void){
    printf("OBTENER EL MAYOR NUMERO DE n Numeros\n");
    do{
        printf("ingrese numero %d: ",i);
        scanf("%d",&n);
        //iniciazar el valor de menor
        if(i == 1)
            menor = n;
        //la logica
        if(n>mayor){
            mayor = n;
        }
        //obtener el menor numero 
        else if(n<menor && n !=0 ){
            menor = n;
        }
        i++;
    }while(n != 0);

    printf("%d es el mayor de %d numeros ingresados\n",mayor,i-1);
    printf("%d es el menor de %d numeros ingresados\n",menor,i-1);
    return 0;
}