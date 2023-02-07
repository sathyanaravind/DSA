#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers ";
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array is full and below is your array";
    for( i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<" \n _________________";
    //pre compute
    int hash[13] = {0};
    for(i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter the number to check";
        cin>>number;
        //fetch
        cout<<"the number is found this many time ";
        cout<<hash[number]<<endl;
    }

}
