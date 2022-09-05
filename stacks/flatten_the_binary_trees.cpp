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

void preorder(stack<TreeNode*> &st,TreeNode* root){
    if(!root) return;
    st.push(root);
    preorder(st,root->left);
    preorder(st,root->right);
}
void flatten(TreeNode* root) {
    if(!root) return;
    stack<TreeNode*> st;
    preorder(st,root);
    root=st.top();
    root->right=root->left=NULL;
    st.pop();
    while(st.size()>0){
        TreeNode* temp=st.top();
        temp->right=root;
        temp->left=NULL;
        st.pop();
        root=temp;
    }
    
}