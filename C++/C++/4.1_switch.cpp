#include<iostream>
using namespace std;

int main(){
    int day;
    cin>>day;
    switch(day){
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesdau";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    default:
        cout<<"Invalid";
    }
    cout<<"Check";
    return 0;
}
