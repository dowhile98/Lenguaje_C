#include <stdio.h>      //entrada/salida
#include <stdlib.h>     //system puase
#include <string.h>     //contiene funciones para trababajar con cadena de caracteres
#include <stdint.h>     //definicion de datos enteros
FILE p;
/*variables globales*/
char ch = 'a';                  //entero pero con signo 254
                                //1byte = 0 000 0000  0 - 255
int8_t a = 254;                 //0000 0001+1
                                //0000 0010
uint8_t b = 254;
char str[100];
char s1[] = "CADENA 1";
char s2[] = "CADENA DOS";

int main(void){
    
    printf("\tINGRESE NOMBRE COMPLETO->");
    fgets(str,50,stdin);
    printf("NOMBRE->%s\n",str);
    printf("INGRESE letra->");
    scanf("%c",&ch);
    printf("LETRA->%c\n",ch);

    system("PAUSE");
    return 0;
}