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

bool hasPathSum(TreeNode* root, int targetSum) {
    if(!root) return false;
    if((root->left==NULL and root->right==NULL) and root->val==targetSum ) return true;
    return hasPathSum(root->left,targetSum-root->val) || hasPathSum(root->right,targetSum-root->val);

}