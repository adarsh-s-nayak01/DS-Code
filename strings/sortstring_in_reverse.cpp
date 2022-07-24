#include<bits/stdc++.h>
#define ll long long
using namespace std;
// C++ program to sort a string of characters
// in descending order

//O(n) complexity
void sortString(string &str){
    map<char,int> m;
    for(int i=0;i<str.length();i++){
        m[str[i]]++;
    }
    map<char,int> ::reverse_iterator it;
    for(it=m.rbegin();it!=m.rend();it++){
        while(it->second--){
            cout<<it->first;
        }
    }
    cout<<endl;
}

//O(nlogn) time complexity
// void sortString(string &str){
    
//     sort(str.begin(),str.end(),greater <char>());
//     //first sort and then reverse the sting
//     sort(str.begin(),str.end());
//     reverse(str.begin(),str.end());
//     cout<<str<<endl;
// }
 

int main()
{
    string s = "alkasingh";
    cout<<s<<endl;
    sortString(s);
    return 0;
}