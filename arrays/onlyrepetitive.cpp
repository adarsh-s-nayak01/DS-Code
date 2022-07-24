#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int arr[20]={1,2,3,4,5,5,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    map<int,int> m;
    for(int i=0;i<n;++i){
        m[arr[i]]++;
        if(m[arr[i]]==2){cout<<"rep no is :"<<arr[i]<<endl;break;}

    }
}