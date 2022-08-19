#include<bits/stdc++.h>
using namespace std;

vector<int> next_greater_to_left(vector<int> arr){
    vector<int> v;
    stack<int> s;
    for(int i=0;i<arr.size();++i){
        if(s.empty()){
            v.push_back(-1);
            s.push(arr[i]);
        }
        else if(s.size()>0 && s.top()>arr[i]){
            v.push_back(s.top());
            s.push(arr[i]);
        }
        else if(s.size()>0 && s.top()<=arr[i]){
            while(s.size()>0 and s.top()<=arr[i]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(-1);
                s.push(arr[i]);
            }
            else{
                v.push_back(s.top());
                s.push(arr[i]);
            }
        }
    }
    //here we need not reverse the array.
}