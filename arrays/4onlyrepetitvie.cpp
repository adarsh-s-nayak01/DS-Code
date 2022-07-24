#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;int arr[n];
    map<int,int> m;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n;++i){
        m[arr[i]]++;
        if(m[arr[i]]==2){
            cout<<arr[i]<<endl;
            break;
        }
    }
    

}