#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int *ptr = lower_bound(a,a+n,5);
    if(ptr == a+n){
        cout<<"not found \n";
        return 0;
         //or else gives out garbage value.
    }
    cout<<(*ptr)<<endl;


    // for vectors 
    // sort(v.begin(),v.end());
    // auto it = upper_bound(v.begin(),v.end(),5);
    // if( it == v.end()){cout<<"Not found ";return;}
    // cout<<(*it)<<endl;

}