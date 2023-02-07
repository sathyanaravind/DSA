#include<stdio.h>
int main()
{
    int a;
    a = 10;
    int *p;
    p = &a;
    printf("address p is : %d\n",p); // p is 2002
    printf("value at address p is : %d\n",*p);
    printf("size of integer is %d bytes\n",sizeof(int));
    printf("address p+1 is : %d\n",p+1); // p+1 is 2006
    printf("value at address p+1 is : %d\n",*(p+1)); // p+1 is 2006
    printf("value at address p+1 is : %d\n",*(p+2));
    printf("value at address p+1 is : %d\n",*(p+3));
}
