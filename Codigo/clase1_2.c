#include <stdio.h>
#include <stdlib.h>
/*defines*/

/*variables glabales*/
float r;
float a;
const float PI = 3.1415;


int main(void){
    printf("escriba el radio:\n");
     scanf("%f",&r);
     a=PI*r*r;
     printf("la area es %f \n",a);
    system("PAUSE");
    return 0;
}