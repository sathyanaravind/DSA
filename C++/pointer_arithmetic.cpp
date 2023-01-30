#include<iostream>
using namespace std;

int main(){
    int a;
    int *p;
    p = &a; //&a = address of a
    cout<<" Address pointed by p: "<<p<<endl;
    cout<<" size of integer is  : "<<sizeof(int)<<endl;
    cout<<" Address pointed by p+1: "<<p+1<<endl;
    return 0;
}
