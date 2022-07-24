#include<bits/stdc++.h>
#define ll long long
using namespace std;
//***************************************************
//minimum rotations required to get the same string
//check if the strings are rotations of each other or not at each step

//
int findRotations(string str){
    // int ans=0;
    int n=str.length();

    for(int i=1;i<n-1;++i){
        string substring;
        if(str.substr(i,n-i)+str.substr(0,i) == str){
            return i;
        }
    }
    return n;

}

//this takes extra space in temp variable.
// int findRotations(string str){
//     string temp=str+str;
//     int n=str.length();
//     for(int i=1;i<n;i++){
//         string substr = temp.substr(i,n);
//         if(str == substr)
//             return i;
//     }
//     return n;

// }

int main()
{
    string str = "geeks";
    cout << findRotations(str) << endl;
    return 0;
}