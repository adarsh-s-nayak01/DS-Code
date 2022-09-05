#include<bits/stdc++.h>
using namespace std;

int main(){
    //inbuilt basic funtionality.
    queue<string> q;
    q.push("adi");
    q.push("avi");
    q.push("neh");
    q.push("sinch");
    q.push("bp");
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<endl;

}