#include<bits/stdc++.h>
#define ll long long
using namespace std;

void rotateArr(int arr[], int d, int n){
        // code here
        int temp[n];int j=0;
        for(int i=d;i<n;++i){
            temp[j]=arr[i];j++;
        }
        j=n-d;
        for(int i=0;i<d;++i){
            temp[j]=arr[i];j++;
        }
        for(int i=0;i<n;++i){
            cout<<temp[i]<<" ";
        }
    }

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function calling
    rotateArr(arr,2,n);

    return 0;
}
