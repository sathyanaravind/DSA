#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    int *p;
    p = (int*)malloc(sizeof(int));
    *p = 10;
    printf(" value at location pointed by p : %d \n",*p);
    free(p);
    *p = 20;
    printf(" value at location pointed by p : %d \n",*p);
    free(p);
}
