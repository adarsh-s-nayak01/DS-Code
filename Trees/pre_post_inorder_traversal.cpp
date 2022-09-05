

// void preOrder(Node *root) {
        //recursive.
        // if(root==NULL) return;
        // cout<<root->data<<" ";
        // preOrder(root->left);
        // preOrder(root->right);
        
        //iterative solution.
        // create a stack
        // push root at first
        // then pop the top of the stack and print it.
        // then push right of popped node into stack at first 
        // then push left of popped node into stack.
    //     if(root==NULL) return;
    //     stack<Node*> st;
    //     st.push(root);
        
    //     while(!st.empty()){
    //         Node* temp=st.top();
    //         st.pop();
    //         cout<<temp->data<<" ";
    //         if(temp->right!=NULL) st.push(temp->right);
    //         if(temp->left!=NULL) st.push(temp->left);
    //     }


    
   
        
    // }