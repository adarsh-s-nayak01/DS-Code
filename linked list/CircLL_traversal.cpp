#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};
//insert at beginning.
void push(node** head_ref,int data){
    node* ptr1 =new node();
    node* temp= *head_ref;
    ptr1->data=data;
    ptr1->next=*head_ref;

    //if ll is not null then set next of last node.
    if(*head_ref != NULL){
        while(temp->next != *head_ref){
            temp=temp->next;
        }
        temp->next=ptr1;
    }
    else{
        ptr1->next =ptr1;//for the first node.
    }

    (*head_ref ) =ptr1;
}

//traverse through ccl to print the elements;
void printList(node* head){
    node* temp=head;
    if(head != NULL){
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp!=head);
    }

}

int main()
{
    /* Initialize lists as empty */
    node *head = NULL;
 
    /* Created linked list will be 11->2->56->12 */
    push(&head, 12);
    push(&head, 56);
    push(&head, 2);
    push(&head, 11);
 
    cout << "Contents of Circular Linked List\n ";
    printList(head);
 
    return 0;
}