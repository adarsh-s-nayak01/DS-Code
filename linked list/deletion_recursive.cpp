#include<bits/stdc++.h>
using namespace std;

struct node{
    int info;
    node* link = NULL;
    node() {}

    node(int a)
        : info(a)
    {

    }
    
};

void deleteNode(node*& head,int val){
    if(head == NULL){
        cout<<"element not present in the list"<<endl;
        return;
    }

    //if current node is the node to be deleted 
    if(head->info == val){
        node* t = head;
        head=head->link;
        delete(t);
        return;
    }
    deleteNode(head->link,val);
}

void push(node*& head,int data){
    node* new_node = new node(data);
    new_node->link = head;
    head = new_node;
}

void print(node* head){
    if(head == NULL and cout<<endl){
        return;
    }
    cout<< head->info <<' ';
    print(head->link);
}


int main(){
    node* head = NULL;
 
    // Adds new element at the
    // beginning of the list
    push(head, 10);
    push(head, 12);
    push(head, 14);
    push(head, 15);
 
    // original list
    print(head);
 
    deleteNode(head, 20); // Call to delete function
    print(head); // 20 is not present thus no change in the
                 // list
 
    deleteNode(head, 10);
    print(head);
 
    deleteNode(head, 14);
    print(head);

    return 0;

}