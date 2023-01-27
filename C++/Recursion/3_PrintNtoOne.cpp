#include<iostream>
using namespace std;

void printNtoOne(int i,int n){
    if (n<1){
        return;
    }
    cout<<n;
    printNtoOne(i,n-i);
}

int main(){
    int n;
    cin>>n;
    printNtoOne(1,n);
    return 0;
}
