#include<bits/stdc++.h>
#define ll long long
using namespace std;

//find the majority element if exists
//element which occurs more than n/2 times
int majorityElement(int arr[],int n){
    int cnt=1;

    sort(arr,arr+n);//O(nlogn)
    for(int i=1;i<n;++i){
        if(arr[i-1]==arr[i]){
            cnt++;
        }
        else{
            if(cnt>n/2){return arr[i-1];}
        }
        cnt=1;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 1, 2, 1, 3, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
     
    // Function calling
    cout<<majorityElement(arr, n);
 
    return 0;
}