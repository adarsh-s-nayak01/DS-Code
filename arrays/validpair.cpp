#include<bits/stdc++.h>
using namespace std;

int hasArrayTwoCandidates(int arr[],int arr_size,int val){
    int l=0,r=arr_size-1;
    sort(arr,arr+arr_size);
    while(l<r){
        int sum=arr[l]+arr[r];
        if(sum==val)
            return 1;
        if(sum>val)
            r--;
        else
            l++;
    }
    return 0;
    
}

int main()
{
    int A[] = { 1, 4, 45, 6, 10, -8 };
    int n = 16;
    int arr_size = sizeof(A) / sizeof(A[0]);
 
    // Function calling
    if (hasArrayTwoCandidates(A, arr_size, n))
        cout << "Array has two elements"
                " with given sum";
    else
        cout << "Array doesn't have two"
                " elements with given sum";
 
    return 0;
}