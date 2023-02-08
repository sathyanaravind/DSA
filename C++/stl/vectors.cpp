#include<bits/stdc++.h>
using namespace std;

void explain_vector(){
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector <pair<int, int>> vp;
    vp.push_back({1,2});
    vp.emplace_back(1,2);

    vector<int > v1(5,100);

    vector<int > v2(5,20);
    vector<int > v3(v2);

    //accessing elements
    cout<<v[0]<<endl;
    cout<<v[1];


}

int main(){
    explain_vector();
    return 0;
}
