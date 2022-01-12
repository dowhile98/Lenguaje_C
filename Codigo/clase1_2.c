#include <stdio.h>
#include <stdlib.h>
/*defines*/

/*variables glabales*/
float r=4;
float A;
const float PI = 3.1415;


int main(void){
    /*variables locales*/
	A = PI*r*r;
    printf("AREA-> %f",A);
    /*salida del programa*/
    return 0;
}
