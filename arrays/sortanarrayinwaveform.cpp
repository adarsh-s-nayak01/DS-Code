#include<bits/stdc++.h>
#define ll long long
using namespace std;
//sort in wave form or alternate sorting
//1 2 3 4 5 6 7 
//7 1 6 2 5 3 4->ans
int sortInWave(int arr[],int n){
    sort(arr,arr+n);
    int i=0,j=n-1;
    while(i < j){
        cout<<arr[j]<<" "<<arr[i]<<" ";
        i++;j--;
    }
    if(n%2==1){
        cout<<arr[i];
    }
}

int main()
{
    int arr[] = {10, 90, 49, 2, 1, 5, 23};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortInWave(arr, n);
    // for (int i=0; i<n; i++)
    //    cout << arr[i] << " ";
    return 0;
}