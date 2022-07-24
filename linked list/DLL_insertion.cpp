#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};
void push(Node** head_ref,int new_data){
    Node* new_node=new Node();
    new_node->data=new_data;

    new_node->next=(*head_ref);
    new_node->prev=NULL;
   

    if((*head_ref)->prev!=NULL)
        (*head_ref)->prev=new_node;
    
    (*head_ref)=new_node;


}
/* Given a node as prev_node, insert 
a new node after the given node */
void insertAfter(Node* prev_node, int new_data){
    if(prev_node==NULL){
        cout<<"given prev node cannot be null";
        return;
    }

    Node* new_node = new Node();
  
    /* 3. put in the data */
    new_node->data = new_data; 

    new_node->next=prev_node->next;
    prev_node->next=new_node;

    new_node->prev=prev_node;
    
    if(new_node->next != NULL)
        new_node->next->prev=new_node;
}

void append(Node** head_ref,int new_data){
    Node* new_node=new Node();

    Node* last = *head_ref;

    new_node->data=new_data;
    new_node->next=NULL;

    if(*head_ref == NULL)
    {
        new_node->prev=NULL;
        *head_ref=new_node;
        return;
    }

    while(last->next!=NULL)
        last=last->next;
    
    last->next=new_node;
    new_node->prev=last;

    return;

}

void addBefore(Node* next_node,int new_data){
    //next_node is the node before which the new node is to be added
    if(next_node==NULL){
        cout<<"next node cannot be null"<<endl;return;
    }
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node->next=next_node;
    
    new_node->prev=next_node->prev;
    if(next_node->data!=NULL)
        next_node->prev->next=new_node;
    next_node->prev=new_node;
    return;
}
void deleteNode(Node** head_ref,Node* del){
    //base case
    if((*head_ref)==NULL || del==NULL)
        return;
    //if del is head node
    if((*head_ref)==del)
        *head_ref=del->next;
    //change next only if node to ble deleted is not the last node
    if(del->next != NULL)
        del->prev->next=del->prev;

    if(del->prev != NULL)
        del->prev->next=del->next;
    free(del);
    return;
}

void deleteNodeatGivenPosition(Node** head_ref,int n){
    if(*head_ref==NULL || n<=0)
        return;
    Node* current=*head_ref;
    int i;
    for(i=1;i<n && current!= NULL;++i)
        current=current->next;
    
    if(current == NULL)
        return;
    deleteNode(head_ref,current);
}

void printList(Node* node){
    Node* last;
    cout<<"\n Traversal in forward direction"<<endl;
    while(node!= NULL){
        cout<<node->data<<" ";
        last=node;
        node=node->next;
    }
    cout<<"\n Traversal in reverse direction"<<endl;
    while(last!=NULL){
        cout<<last->data<<" ";
        last=last->prev;
    }

}


int main()
{
    
}