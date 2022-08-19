#include<bits/stdc++.h>
using namespace std;
 struct TreeNode {
     int val;   
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


int widthOfBinaryTree(TreeNode* root) {
    if(!root) return 0;
    queue<TreeNode*> q;
    q.push(root);
    int max=INT_MIN;
    while(!q.empty()){
        int size=q.size();
        TreeNode* n=NULL;
        stack<TreeNode*> s;
        for(int i=0;i<size;++i){
            TreeNode* node=q.front();
            if(node->left){q.push(node->left);s.push(node->left); } 
            else{s.push(n);}
            if(node->right){q.push(node->right);s.push(node->right); }
            else{s.push(n);}
            q.pop(); 
        }
        while(s.top()==NULL){s.pop();}
        if(max<s.size()){max=s.size();}

    }
    return max;
}      
