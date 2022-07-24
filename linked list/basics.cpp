#include<bits/stdc++.h>
using namespace std;


class node{
    public:
        int data;
        node* next;

};

void printList(node* head){
    while(head!= NULL){
        cout<<head->data<<" ";
        head=head->next;
    }

}

//at node before the first node; change the head to newnode and point new node next to old head;
void add_first(node** head_ref,int new_data){
    //allcoate the new node
    node *new_node = new node();
    //put in the data
    new_node->data=new_data;
    //make the next of new node as head
    new_node->next=(*head_ref);
    //mvoe the head to point to the new node.
    (*head_ref)=new_node;


    //we have a pointer to head an dwe can directly attatch and change the pointer
    // insert at head -> O(1)
}

void insert_after(node** head_ref,int data,int new_data){
    node* new_node= new node();
    node* temp=*head_ref;

    new_node->data=new_data;
    while(temp->data!=data){
        temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}
void insert_after2(node* head,int data,int new_data){
    node* new_node= new node();
    node* temp=head;

    new_node->data=new_data;
    while(temp->data!=data){
        temp=temp->next;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}

void insert_at_end(node* head,int data){
    node* new_node= new node();
    new_node->data=data;
    new_node->next=NULL;
    
    if(head==NULL){
        cout<<"initially a empty linked list"<<endl;
        head=new_node;return;
        
    }

    node* temp=head;
    while(temp->next!=NULL) temp=temp->next;

    temp->next=new_node;
}



int main(){
    node* head=NULL;
    node* second=NULL;
    node* third=NULL;
    

    //allcote 3 nodes in heap.
    //gives out space for pointers to node
    //new nodename()-> funtion allocates the memory.
    head= new node();
    second= new node();
    third= new node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;

    //linked list traversal
    add_first(&head,7);
    insert_after2(head,2,8);
    insert_at_end(head,45);
    printList(head);

    return 0;




}   