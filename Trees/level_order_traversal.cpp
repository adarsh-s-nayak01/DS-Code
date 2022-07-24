#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;

};

vector<vector<int>> levelOrder(Node* root){
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        vector<int> level;
        int size=q.size();
        for(int i=0;i<size;++i){
            Node* node=q.front();
            q.pop();
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);
            level.push_back(node->val);
        }
        ans.push_back(level);
    }
    return ans;
}

vector<int> preorderTraversal(Node* root){
    vector<int> preorder;
    if(root == NULL)
        return preorder;
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        Node* node=st.top();
        st.pop();
        preorder.push_back(node->val);
        if(root->right != NULL) st.push(node->right);
        if(root->left != NULL) st.push(node->left);
    }
    return preorder;
}