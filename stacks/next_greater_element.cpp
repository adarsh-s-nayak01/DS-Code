#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> v;
    stack<int> s;
    int n=nums2.size();
    map<int,int> m;
    for(int i=n-1;i>=0;i--){
        if(s.empty()){
            s.push(nums2[i]);
            m[nums2[i]]=-1;
        }
        else if(s.size()>0 && s.top()>nums2[i]){
            m[nums2[i]]=s.top();
            s.push(nums2[i]);
        }
        else if(s.size()>0 && s.top()<=nums2[i]){
            while(s.size()>0 && s.top()<=nums2[i]){
                s.pop();
            }
            if(s.empty()){
                m[nums2[i]]=-1;
                s.push(nums2[i]);
            }
            else{
                m[nums2[i]]=s.top();
                s.push(nums2[i]);
            }
        }
    }
    for(int i=0;i<nums1.size();++i){
        v.push_back(m[nums1[i]]);
    }
    return v;
}