#include<bits/stdc++.h>
using namespace std;

int deleteelement(int arr[],int n,int key){
    int pos=-1;
    //find the element;
    for(int i=0;i<n;++i){
        if(key==arr[i]){
            pos=i;break;
        }
    }
    if(pos== -1){
        cout<<"element not found "<<endl;
        return n;
    }
    //delete the element;
    for(int i=pos;i<n-1;++i){
        arr[i]=arr[i+1];
    }
    return n-1;

}

int main(){
    int arr[] = {10, 50, 30, 40, 20};
 
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
 
    cout << "Array before deletion\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] <<" " ;
    cout<<endl;
    n = deleteelement(arr,n,key);

    cout << "\n\nArray after deletion\n";
    for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
 
    return 0;
}