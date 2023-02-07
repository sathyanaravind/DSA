#include<iostream>
using namespace std;

int main(){
    int a;
    int *p;
    a = 10;
    p = &a; //&a = address of a
    cout<<" Address pointed by p: "<<p<<endl;
    cout<<" Value at address pointed by p : "<<*p<<endl;
    cout<<" Address of a: "<<&a<<endl;
    return 0;
}
