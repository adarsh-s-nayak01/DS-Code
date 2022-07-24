#include<bits/stdc++.h>
#define ll long long
using namespace std;

//this works fine only if all strings are of diff length.
void sort(string arr[],int n){
    map<int,string> m;
    for(int i=0;i<n;++i){
        m[arr[i].length()]=arr[i];
    }
    for(auto it=m.begin();it!=m.end();++it){
        cout<<it->second<<" ";
    }
    cout<<endl;
}
// void printArraystring(string arr[],int n){
//     for(int i=0;i<n;++i){
//         cout<<arr[i]<<" ";
//     }
// }

int main()
{
    string arr[] = {"GeeksforGeeks", "I", "from", "am","L"};
    int n = sizeof(arr)/sizeof(arr[0]);
     
    // Function to perform sorting
    sort(arr, n);
 
    // Calling the function to print result
    // printArraystring(arr, n);
     
    return 0;
}