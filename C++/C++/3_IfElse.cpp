#include<iostream>
using namespace std;

int main() {
    // write a program that takes an input of age and
    // print if you are adult of not
    int age;
    cout<< " Enter your age" << "\n";
    cin>>age;
    if (age >= 18){
        cout<< "You are an adult";
    }
    else{
        cout<< " You are not an adult";
    }
    return 0;
    }
