#include<bits/stdc++.h>
#define ll long long
using namespace std;

void conversion(string str,string given){
    map<char,int> s;
    int ind=65;
    for(int i=0;i<26;++i){
        s[str[i]]=ind;ind++;
    }
    string res="";
    for(int i=0;i<given.length();i++){
        res+= char(s[given[i]]);
        res[i]=tolower(res[i]);
    }
    cout<<res;

}


int main()
{
    string charSet = "qwertyuiopasdfghjklzxcvbnm";
    string str = "utta";
    conversion(charSet, str);
    // cout << str;
    return 0;
}