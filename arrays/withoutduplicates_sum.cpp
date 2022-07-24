#include<bits/stdc++.h>
#define ll long long
using namespace std;
//to find sum of array without duplicates.  sum1
//also with duplicates sum2
void withoutdup(int arr[],int n){
    map<int,int> m;
    int sum1=0,sum2=0;
    for(int i=0;i<n;++i){
        if(m[arr[i]]==0){
            sum1+=arr[i];
            m[arr[i]]++;
        }
        sum2+=arr[i];
    }
    cout<<sum1<<endl;
    cout<<"with duplicates the sum "<<sum2<<endl;

}

int main()
{
    int arr[20]={2,3,5,3,5,7,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"without duplicates ";

    withoutdup(arr,n);
    
}