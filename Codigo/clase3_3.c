#include <stdio.h>
#include <stdlib.h>

int nums[5] = {1,2,3,4,5};
int **pd;
int main(void){
    int *p = nums;          //apunta al primer elemento
    printf("nums->%d\n",*p);
    pd = &p;        
    *pd = nums + 1;         //apunta al segundo elemento
    printf("nums->%d\n",*p);
    return 0;
}