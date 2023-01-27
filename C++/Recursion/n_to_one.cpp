#include<iostream>
using namespace std;

void printname(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    printname(n-1);

}

int main(){
    int n =10;
    printname(n);
    return 0;
}
