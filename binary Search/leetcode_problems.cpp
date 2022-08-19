#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int get_key(vector<int>&nums,int start,int end,int key ){
            if(start>end)
                return -1;
            int mid=start + (end-start)/2;
            if(nums[mid]==key)
                return mid;
            //for first half to be sorted.
            if(nums[start]<=nums[mid]){
                if(key >= nums[start] and key<=nums[mid])
                    return get_key(nums,start,mid-1,key);
                return get_key(nums,mid+1,end,key);
            }
            if(key>=nums[mid] and key<=nums[end])
                return get_key(nums,mid+1,end,key);
            return get_key(nums,start,mid-1,key);
    }

    int search(vector<int>& nums, int target) {
        int index=get_key(nums,0,nums.size()-1,target);
        return index;
    }
    //on a notion that the higher numbers will be obatained at low==high

    int findPeakElement(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        while(low<high){
            int mid1=(low+high)/2;
            int mid2=mid1+1;
            if(nums[mid1] < nums[mid2])
                low=mid2;
            else 
                high=mid1;
        }
        return low;
    }
};

int main(){

}
