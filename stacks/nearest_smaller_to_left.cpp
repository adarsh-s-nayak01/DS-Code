#include<bits/stdc++.h>
using namespace std;

vector<int> nearest_smaller_to_left(vector<int> arr){
    vector<int> v;
    stack<int> s;
    for(int i=0;i<arr.size();++i){
        if(s.empty()){
            s.push(arr[i]);
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()<arr[i]){
            v.push_back(s.top());
            s.push(arr[i]);
        }
        else if(s.size()>0 && s.top()>=arr[i]){
            while(s.size()>0 && s.top()>=arr[i]){
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
    return v;
}
int main(){
    vector<int> arr={4,5,2,10,8};
    vector<int> ans=nearest_smaller_to_left(arr);
    for(auto it: ans){
        cout<<it<<" ";
    }
}