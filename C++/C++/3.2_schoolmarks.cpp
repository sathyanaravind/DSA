#include<iostream>
using namespace std;

int main() {
    int marks;
    cin >> marks;
    if (marks<25){
        cout<<"F";
    }
    if (marks>=25 && marks<=44){
        cout<<"E";
    }
    if (marks>=45 && marks<=49){
        cout<<"D";
    }
    if (marks>=50 && marks<=59){
        cout<<"D";
    }
    if (marks>=60 && marks<=79){
        cout<<"C";
    }
    if (marks>=80 && marks<=100){
        cout<<"A";
    }
    return 0;
}
