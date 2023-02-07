#include<stdio.h>
int total;
int square(int x)
{
    return x*x;
}

int sum_of_square(int x, int y)
{
    int z = square(x+y);
    return z;
}

int main()
{
    int a = 4, b = 3;
    total = sum_of_square(a,b);
    printf("output = %d",total);
}
