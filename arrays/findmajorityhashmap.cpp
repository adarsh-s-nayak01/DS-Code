#include<bits/stdc++.h>
#define ll long long
using namespace std;
//using hashmap technique..
//find the majority element if exists
//element which occurs more than n/2 times
int majorityElement(int arr[],int n){
    map<int,int> m;
    for(int i=0;i<n;++i){
        m[arr[i]]++;
    }
    for(auto it=m.begin();it!=m.end();++it){
        if(it->second > n/2){return it->first;}
    }
    return -1;
}
int main()
{
    int arr[] = {22, 2, 1, 2, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
     
    // Function calling
    cout<<majorityElement(arr, n);
 
    return 0;
}