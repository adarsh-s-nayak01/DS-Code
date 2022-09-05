#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* left,right;
};
vector<int> preInPostTraversl(node* root){
    stack<pair<node*,int>> st;
    st.push(root,1);
    vector<int> pre,post,in;
    if(root==NULL)    return;
    while(!st.empty()){
        auto it = st.pop();
        st.pop();
        //for pre
        //increment 1 to 2 , before pushing back to the stack
        //push left side if it exists
        if((it.second==1)){
            pre.push_back(it.first->val);
            it.second++;
            st.push(it);
            if(it.first->left != NULL){
                st.push({it.first->left,1});
            }
        }

        //this part is for inorder
        //increment 2 to 3 
        // push if right exists
        else if(it.second==2){
            in.push_back(it.first->val);
            it.second++;
            st.push(it);
            if(it.first->right != NULL){
                st.push(it.first->left,1);
            }
        }
        //don't push it back again
        //this is for post order.
        else{
            post.push_back(it.first->val);
        }

    }


}