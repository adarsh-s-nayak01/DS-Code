#include<bits/stdc++.h>
using namespace std;

vector<int> nearest_smaller_to_right(vector<int> arr){
    vector<int> v;
    stack<int> s;
    for(int i=arr.size()-1;i>=0;i--){
        if(s.empty()){
            v.push_back(-1);
            s.push(arr[i]);
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
    reverse(v.begin(),v.end());
    return v;
}

int main(){
    vector<int> arr={4,5,2,10,8};
    vector<int> ans=nearest_smaller_to_right(arr);
    for(auto it: ans){
        cout<<it<<" ";
    }
}
