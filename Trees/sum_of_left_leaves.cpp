#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int data){
            val=data;
            left=NULL;
            right=NULL;
        }
};

int sumOfLeftLeaves(TreeNode* root,bool isleft=false) {
    if(!root) return 0;
    if(!root->left && !root->right) return isleft? root->val :0;//check for a left node and then check if it's a leaf node.
    return sumOfLeftLeaves(root->left,true)+sumOfLeftLeaves(root->right,false);
}