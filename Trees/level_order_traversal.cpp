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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root==NULL) return ans;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> level;
            
            for(int i=0;i<size;++i){
                TreeNode* node=q.front();
                q.pop();
                if(node->left!=NULL){q.push(node->left);}
                if(node->right!=NULL){q.push(node->right);}
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};

// vector<int> preorderTraversal(Node* root){
//     vector<int> preorder;
//     if(root == NULL)
//         return preorder;
//     stack<Node*> st;
//     st.push(root);
//     while(!st.empty()){
//         Node* node=st.top();
//         st.pop();
//         preorder.push_back(node->val);
//         if(root->right != NULL) st.push(node->right);
//         if(root->left != NULL) st.push(node->left);
//     }
//     return preorder;
// }