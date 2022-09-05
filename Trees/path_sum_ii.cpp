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

void paths(TreeNode* root, int targetSum,vector<int> &a,vector<vector<int>> &ans){
    if(!root) return; 
    a.push_back(root->val);
    if(root->left==NULL and root->right==NULL and root->val==targetSum){ ans.push_back(a);}
    paths(root->left,targetSum-root->val,a,ans);
    paths(root->right,targetSum-root->val,a,ans);
    a.pop_back();
}

vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>> ans;
    vector<int> a;
    paths(root,targetSum,a,ans);
    return ans;
}
