#include<bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
  */
 struct TreeNode {
     int val;   
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


int minDepth(TreeNode* root){
    if(!root) return 0;
    queue<TreeNode*> q;
    int i=0;
    q.push(root);
    while(!q.empty()){
        i++;
        int size=q.size();
        for(int j=0;j<size;++j){
            TreeNode* node=q.front();
            if(node->left==NULL and node->right==NULL){return i;}
            if(node->left){q.push(node->left);}
            if(node->right){q.push(node->right);}
            q.pop();
        }
    }
    return -1;

    //  if(!root) return 0;
    //     int l=minDepth(root->left);
    //     int r=minDepth(root->right);
        
    //     return 1+ (min(l,r)!=0?min(l,r):max(l,r));
}