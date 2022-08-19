#include<bits/stdc++.h>
using namespace std;
// i wrote this on my own.
int main(){
    string s;cin>>s;
    stack<char> stack;
    int n=s.length();int i=0;
    while(n--){
        char c=s[i];
        ++i;
        if(c=='('){
            stack.push(c);
        }
        else{
            // char temp=stack.top();
            stack.pop();
        }

    }
    if(stack.empty()){cout<<"balanced paranthesis\n";}
    else{cout<<"not balanced\n";}
}