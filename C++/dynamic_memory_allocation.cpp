#include<iostream>
using namespace std;

int main()
{
    int a;
    int *p;
    p = new int;
    *p = 10;
    cout<<"value at location pointed by p : "<<*p<<endl;
    delete p;
    p = new int[20];
    delete[] p;
}
