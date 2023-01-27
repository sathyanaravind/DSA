#include<iostream>
using namespace std;

void printname(int n){
    if(n==0){
        return;
    }
    printname(n-1);
    cout<<n<<endl;
}

int main(){
    int n =10;
    printname(n);
    return 0;
}
