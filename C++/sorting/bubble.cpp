#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"enter the array size :\n";
    cin>>n;
    int arr[n];
    cout<<"enter the elements :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    bubble_sort(arr,n);
    cout<<"\n sorted array :\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
