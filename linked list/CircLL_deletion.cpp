#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
};
//add at the beginning.
void push(node** head_ref, int data){
    node* ptr1=new node();
    ptr1->data=data;
    ptr1->next=*head_ref;
    if(*head_ref != NULL){
        node* temp=*head_ref;
        while(temp->next != *head_ref){
            temp=temp->next;
        }
        temp->next=ptr1;
    }
    else{
        ptr1->next=ptr1;
    }
    *head_ref=ptr1;
}
void printList(node* head){
    node* temp=head;
    if(head != NULL){
        do{
            cout<<temp->data<<" ";
            temp=temp->next;
        }while(temp != head);
    }
    cout<<endl;
}

//function to delete a given node from the list.
//O(n) time complexity.
void deleteNode(node** head,int key){
    //if the list is empty.
    if(*head == NULL)
        return;
    //if only one node.
    if( (*head)->data==key && (*head)->next==(*head)){
        free(*head);
        *head=NULL;
        return;
    }
    node *last=*head;
    node* d;
    //if head has to be deleted.
    if((*head)->data == key){
        //find the last element in the list.
        while(last->next != *head)
            last=last->next;
        //point last node to the next of head i.e
        //i.e second element of the node.
        last->next=(*head)->next;
        free(*head);
        *head=last->next;//pointing to the second ele now which is the first element.
        return;
    }
    //if node to be deleted is not found or if the end of the list is reached.
    while(last->next !=*head && last->next->data != key)
        last=last->next;

    //if node to be deleted was found.
    if(last->next->data == key){
        d=last->next;
        last->next=d->next;
        free(d);
    }
    else{
        cout<<"no such key is found in the list to delete."<<endl;
    }

}



int main(){
    node* head= NULL;
    /* Created linked list will be 2->5->7->8->10 */
    push(&head, 2);
    push(&head, 5);
    push(&head, 7);
    push(&head, 8);
    push(&head, 10);
  
    cout << "List Before Deletion: ";
    printList(head);
  
    deleteNode(&head, 7);
  
    cout << "List After Deletion: ";
    printList(head);
  
    return 0;

}