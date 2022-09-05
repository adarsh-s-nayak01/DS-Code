#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={0,-1,2,-3,1};int x=-2;
    int n= sizeof(arr)/sizeof(arr[0]);
    int flag=0;

    //time complexity n^2
    for(int i=0;i<n-1;++i){
        for(int j=i+1;j<n;++j){
            if(arr[i]+arr[j]==x){
                cout<<arr[i]<<" "<<arr[j]<<endl;break;
                flag=1;
            }
        }
        if(flag) break;
    }
}