#include<bits/stdc++.h>
#define ll long long
using namespace std;
//rearrange array such that arr[i]=i
//naive approach.

void fixArray(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n;++i){
     
        for(j=0;j<n;++j){
            if(arr[j]==i){
                swap(arr[i],arr[j]);
                break;
            }
        }
    }

    //iterating over an array.
    for(int i=0;i<n;++i){
        if(arr[i] != i){arr[i]= -1;}
    }


    cout<<"after rearranging "<<endl;
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n, ar[] = { -1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
    n = sizeof(ar) / sizeof(ar[0]);
 
    // Function Call
    fixArray(ar, n);
}