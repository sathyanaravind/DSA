#include<iostream>
using namespace std;

void print_stars(int n){
    int i=0;
    if (n>0){
        print_stars(n-1);
    }
    for(i=0;i<n;i++){
                cout<<"*"<<" ";

    }
}

int main(){
    int n = 5;
    print_stars(n);
    return 0;
}

