#include<stdio.h>
int main()
{
    int a;
    int *p;
    a = 10;
    p = &a; //&a = address of a
    printf("%d\n",p);
    printf("%d\n",*p); // *p = value at address pointed by p
    printf("%d\n",&a);

    printf("dereferencing \n");
    printf("value of a\n");
    printf("%d\n",a);
    printf("dereferencing using *p\n");
    *p = 12;
    printf("new value of a dereference using *p\n");
    printf("%d\n",a);


}
