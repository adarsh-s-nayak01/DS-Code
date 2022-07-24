#include<bits/stdc++.h>
using namespace std;
//deletion of the elements.
//time complexity -> O(n)
class node{
    public:
        int data;
        node* next;
};

//given a reference to a pointer to pointer
//insert at front
void push(node** head_ref,int new_data){
    node* new_node=new node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
//deletes the first occurence of the key in the linked list

void deleteNode(node** head_ref,int key){
    //store head node
    node* temp=*head_ref;
    node* prev=NULL;

    //if head node holds the key
    if(temp!=NULL and temp->data==key){
        *head_ref=temp->next;
        delete temp;
        return;
    }
    else{
        //search for the element to be deleted 
        //keep the track of the prev node;
        while(temp!=NULL and temp->data != key){
            prev=temp;
            temp=temp->next;
        }
    
    if(temp == NULL) return;
    
    //unlink the node from the linked list
    prev->next=temp->next;

    //free the memory from the space.
    delete temp;
    }
}


void printList(node* head){
    while(head!= NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    node* head=NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    cout<<"created a linked list :"<<endl;
    printList(head);
    
    deleteNode(&head,1);
    cout<<"Linked list after deletion of 1:"<<endl;
    printList(head);
    return 0;
}