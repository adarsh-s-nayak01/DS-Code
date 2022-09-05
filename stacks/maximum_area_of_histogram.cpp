#include<bits/stdc++.h>
using namespace std;

vector<int> nearest_smaller_to_left(vector<int> & arr){
    vector<int> v;
    stack<pair<int,int>> s;
    int pseudo=-1;

    for(int i=0;i<arr.size();++i){
        if(s.empty()){
            v.push_back(pseudo);
        }
        else if(s.size()>0 && s.top().first<arr[i]){
            v.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=arr[i]){
            while(s.size()>0 && s.top().first>=arr[i]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(pseudo);
            }
            else{v.push_back(s.top().second);}
        }
        s.push({arr[i],i});
    }
    return v;
}
vector<int> nearest_vector_to_right(vector<int>& arr){
    vector<int> v;
    stack<pair<int,int>> s;
    int pseudo=arr.size();
    for(int i=arr.size()-1;i>=0;i--){
        if(s.empty()){
            v.push_back(pseudo);
        }
         else if(s.size()>0 && s.top().first<arr[i]){
            v.push_back(s.top().second);
        }
        else if(s.size()>0 && s.top().first>=arr[i]){
            while(s.size()>0 && s.top().first>=arr[i]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(pseudo);
            }
            else{v.push_back(s.top().second);}
        }
        s.push({arr[i],i});
    }
    reverse(v.begin(),v.end());
    return v;
}

int largestRectangleArea(vector<int>& heights) {
    vector<int> left=nearest_smaller_to_left(heights);
    vector<int> right=nearest_vector_to_right(heights);
    vector<int> width;
    for(int i=0;i<heights.size();++i){
        width.push_back(right[i]-left[i]-1);
    }
    vector<int> ans;
    for(int i=0;i<heights.size();++i){
        ans.push_back(width[i]*heights[i]);
    }
    int max=*max_element(ans.begin(),ans.end());
    return max;
}

