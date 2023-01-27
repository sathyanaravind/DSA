#include<iostream>
using namespace std;

void odd();
void even();
int n=1;

void odd(){
    if(n<=10){
        cout<<n+1<<" ";
        n++;
        even();
    }
    return;
}

void even(){
    if(n<=10){
        cout<<n-1<<" ";
        n++;
        odd();
    }
    return;
}

int main(){
    odd();
    cout<<endl<<"Expected result : 2 1 4 3 6 5 8 7 10 9 ";
    return 0;
}


