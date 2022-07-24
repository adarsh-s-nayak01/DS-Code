#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool compare(string &s1,string &s2){
    return s1.length() < s2.length();
}
void printArraystring(string arr[],int n){
    for(int i=0;i<n;++i)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    string arr[] = {"GeeksforGeeks", "I", "from", "am"};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"before sorting : ";
    printArraystring(arr,n);
    sort(arr,arr+n,compare);
    cout<<"after sorting : ";
    printArraystring(arr,n);
    return 0;
}