#include <stdio.h>
#include <stdlib.h>
/*defines*/

/*variables glabales*/
float r;
float A;
const float PI = 3.1415;


int main(void){
    /*variables locales*/
    printf  ("el radio:\n");
    scanf("%f",&r);
    A = PI*r*r;
    
    printf("AREA-> %f",A);
    system("PAUSE");
    /*salida del programa*/
    return 0;
}