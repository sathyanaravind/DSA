#include<bits/stdc++.h>
using namespace std;

void explain_vector(){
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end();

    vector<int>::iterator it = v.rend();

    vector<int>::iterator it = v.rbegin();

    cout<<v[0]<<" ";
    cout<<v.back()<<" ";

    for(vector<int>iterator it =v.begin();v!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it =v.begin();v!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it : v){
        cout<<it<<" ";
    }

}

int main(){
    explain_vector();
    return 0;
}
