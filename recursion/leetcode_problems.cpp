#include<bits/stdc++.h>
using namespace std;
 
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL or head->next==NULL) return head;
        ListNode *prev=head,*next=head->next;
        next->next=swapPairs(next->next);
        prev->next=next->next;
        next->next=prev;
        head=next;
        return head;
    }
    double myPow(double x, int n) {
        double res=1;
        while(n){
            if(n%2){
                res=n>0?res*x:res/x;
            }
            x=x*x;
            n/=2;
        }
        return res;
    }
    //  recursive code, gives TLE.
       void insert(vector<int> &nums,int temp){
            if(nums.size()==0 || nums[nums.size()-1]<=temp){
                nums.push_back(temp);
                return;
            }
            int val=nums[nums.size()-1];
            nums.pop_back();
            insert(nums,temp);
            nums.push_back(val);
        }
        void sort_arr(vector<int> & nums){
            if(nums.size()==1)
                return;
            int temp=nums[nums.size()-1];
            nums.pop_back();
            sort_arr(nums);
            insert(nums,temp);

        }
        vector<int> sortArray(vector<int>& nums) {
            sort_arr(nums);
            return nums;
        }
        //**
        vector<int> sortArray(vector<int>& nums) {
            for(int i=0;i<nums.size()-1;++i){
                for(int j=i+1;j<nums.size();++j){
                    if(nums[i]>nums[j]){swap(nums[i],nums[j]);}
                }
            }
            return nums;
        }

    ListNode* addtwonodes(ListNode* l1, ListNode* l2,ListNode* new_head,int rem){
        if(l1==NULL || l2==NULL){

        }
        int val=l1->val+l2->val+rem;
        new_head=new ListNode(val%10);
        rem=val/10;
        addtwonodes(l1, l2,new_head,rem);
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* new_head=NULL;
        
        return new_head;
    }
};
