#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;int arr[n];
    int sum=0;int sum1=0;
    map<int,int> m;
    for(int  i=0;i<n;++i){
        cin>>arr[i];
        if(m[arr[i]]==0){
            sum1+=arr[i];
            m[arr[i]]++;
        }
        sum+=arr[i];
    }
    cout<<2*sum1-sum<<endl;
    //O(n) solution.
    // int res=arr[0];
    // for(int i=1;i<n;++i){
    //     res=res^arr[i];
    // }
    // cout<<res<<endl;

}