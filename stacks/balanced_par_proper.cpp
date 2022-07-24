#include <bits/stdc++.h>

using namespace std;


//comparing in if else statements get reduced.
unordered_map<char,int> symbols={{'(',-1},{')',1},{'[',-2},{']',2},{'{',-3},{'}',3}};

string isBalanced(string s) {
    stack<char> st;
    for(char bracket:s){
        if(symbols[bracket]<0){
            st.push(bracket);
        }
        else{
            if(st.empty()){
                return "NO";
            }
            char top=st.top();
            st.pop();
            if(symbols[bracket]+symbols[top] != 0){
                return "NO";
            }
        }
    }
    if(st.empty()){
        return "YES";
    }
    return "NO";



}

int main()
{
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        cout<<isBalanced(s)<<endl;
    }
}
