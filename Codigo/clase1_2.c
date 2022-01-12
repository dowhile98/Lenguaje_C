#include <stdio.h>
#include <stdlib.h>
/*defines*/

/*variables glabales*/
float r;
float A;
const float PI = 3.1415;


int main(void){
    /*variables locales*/

    /*mostrar un mensaje y pedir un valor*/
    printf("AREA DE UN CIRCULO\n");
    printf("RADIO->");
    scanf("%f",&r);
    A = PI * r * r;
    printf("\nAREA-> %f metros cuadrados\n",A);
    /*salida del programa*/
    system("pause");
    return 0;
}