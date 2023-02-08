#include<bits/stdc++.h>
using namespace std;

void explain_pair(){
    pair <int, int> p ={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair <int, pair<int, int>> pa = {1, {1,3}};
    cout<< pa.first<<" "<< pa.second.first<<" "<<pa.second.second<<endl;

    pair <int, int> arr[] = {{1,3}, {2,5}, {7,9}};
    cout<<arr[0].first;
    cout<<arr[1].second;
}

int main(){
    explain_pair();
    return 0;
}
