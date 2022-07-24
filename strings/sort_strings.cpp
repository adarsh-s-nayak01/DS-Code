#include<bits/stdc++.h>
#define ll long long
using namespace std;
//sorting the string

//sorting using hashing
//O(n*MAX_char) as max_char is constant it is O(n) 
void sortString(string &str){
    map<char,int> m;
    for(int i=0;i<str.length();++i){
        m[str[i]]++;
    }
    for(auto value:m){
        while(value.second--){
            cout<<value.first;
        }
    }
    cout<<endl;
}




//using stl function.

// void sortString(string &str){
//     int n=str.length();
//     sort(str.begin(),str.end());//O(nlogn)
//     cout<<str;
    
// }
int main()
{
    string s = "geeksforgeeks";
    cout<<s<<endl;
    sortString(s);
    return 0;
}