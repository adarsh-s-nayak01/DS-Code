#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int n ){
        vector<vector<int>> v;
        v[0]={1};
        if(n>1){
            v[1]={1,1};
            vector<int> a;
            for(int i=2;i<=n;++i){
                a.push_back()
            }
            
        }   
    }
    //two sum
    //implementing the hash table.
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> res;
        for(int i=0;i<nums.size();++i){
            int rem=target-nums[i];
            if(m[rem]!=m.end()){
                //+1 because it is not 
                res.push_back(m[rem]);
                res.push_back(i);
                return res;
            }
            m[nums[i]]=i;
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        int left=0,right=nums.size()-1;
        bool a=true,b=true;
        while(left<=right){
            if(nums[left]==target and a){res.push_back(left);a=false;}
            else{left++;}
            if(nums[right]==target and b){res.push_back(right);b=false;}
            else{right--;}
            if(a==false and b==false){return res;}
        }
        return res;
    }
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;++i){
            m[nums[i]]++;
        }
        vector<int> res;
        for(auto &it: m){
            if(it.second>n/3){
                res.push_back(it.first);
            }
        }
        return res;
    }
    int maxProfit(vector<int>& prices) {
        int lsf=INT_MAX;
        int op=0;//overall profit
        int pist=0;//profit if sold today
        int n=prices.size();
        for(int i=0;i<n;++i){
            if(prices[i]<lsf){
                lsf=prices[i];
            }
            pist=prices[i]-lsf;
            if(pist>op){
                op=pist;
            }
        }
        return op;//maximum overall profit.
    }

    int searchInsert(vector<int>& nums, int target) {
        //use binary search.
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){low=mid+1;}
            else{high=mid-1;}
        }
        return low;
    }

    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();++i){
            m[nums[i]]++;
        }
        int pairs=0,leftover=0;
        for(auto &it:m){
            if(it.second&1){leftover++;}
            pairs+=it.second/2;
        }
        ans={pairs,leftover};
        return ans;
    }
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v1,v2;
        set<int> s1(begin(nums1),end(nums1)),s2(begin(nums2),end(nums2));
        set_difference(begin(s1),end(s1),begin(s1),end(s2),back_inserter(v1));//distinct only in s1//
        set_difference(begin(s2),end(s2),begin(s1),end(s2),back_inserter(v2));
        return {v1,v2};
        
    }
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> m;
        for(int i=0;i<tasks.size();++i){
            m[tasks[i]]++;
        }
        int ct=0;
        for(auto &it:m){
            if(it.second==1){return -1;}
            ct+= it.second/3;
            if(it.second%3){ct+1;}
        }
        return ct;
    }
};
