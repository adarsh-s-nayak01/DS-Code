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
int vec_to_int(vector<int> num){
    int n=0;int N=num.size();
    for(int i=0;i<num.size();++i){
        n += num[i]*pow(10,N-i-1);
    }
    return n;
}
// void findSum(TreeNode* root, int &ans, vector<int> a){
//     if(!root) return;
//     a.push_back(root->val);
//     if(root->left==NULL && root->right==NULL){
//         ans+= vec_to_int(a);//convert vector to integer.
//     }
//     findSum(root->left,ans, a);
//     findSum(root->right,ans, a);
//     a.pop_back();
// }
// int sumNumbers(TreeNode* root) {
//     int ans=0;
//     vector<int> a;
//     findSum(root,ans,a);
//     return ans;
// }
int dfs(TreeNode* root, int cur){
    if(!root) return 0;
    cur=cur*10+root->val;
    if(!root->left && !root->right) return cur;
    return dfs(root->left,cur) + dfs(root->right,cur);
}
int sumNumbers(TreeNode* root){
    int cur=0;
    return dfs(root, cur);
}

