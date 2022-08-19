#include<bits/stdc++.h>
using namespace std;
 struct TreeNode {
     int val;
     int sum; 
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
// void paths(TreeNode* root,vector<int> &a, vector<vector<int>> &ans){
//     if(!root) return;
//     a.push_back(root->val);
//     if(!root->left && !root->right) ans.push_back(a);
//     paths(root->left,a,ans);
//     paths(root->right,a,ans);
//     a.pop_back();
// }

// int pathSum(TreeNode* root, int targetSum) {
//     vector<int> a;
//     vector<vector<int>> ans;
//     paths(root,a, ans);
//     int ct=0;
//     for(int i=0;i<ans.size();++i){
//         vector<int> v=ans[i];
//         int left=0,right=left+1;
//         if(left==targetSum){ct++;}

//     }
// }


long long int sumUp(TreeNode* root,long long int pre,long long int &sum){
    if(!root) return 0;
    long long int cur=pre+root->val;
    return (cur==sum)+sumUp(root->left,cur,sum)+sumUp(root->right,cur, sum);
}

long long int pathSum(TreeNode* root,long long int targetSum){
    if(!root) return 0;
    return sumUp(root,0,targetSum)+pathSum(root->left,targetSum)+pathSum(root->right,targetSum);
}