#include<bits/stdc++.h>
using namespace std;


void rev_sort(vector<int> &v){
    if(v.size()==0) return;
    int val=v.back();
    v.pop_back();
    rev_sort(v);
    v.push_back(val);
}
int main(){
    vector<int> v={1,2,3,4,5,6,7};

    rev_sort(v);
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;

    
    
}