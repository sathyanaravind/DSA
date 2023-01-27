#include<iostream>
using namespace std;

void factorial(int n){
    if(n==0){
        return;
    }
    factorial(n-1);
    cout<<n*factorial(n-1);

}

int main(){
    int n =10;
    factorial(n);
    return 0;
}
