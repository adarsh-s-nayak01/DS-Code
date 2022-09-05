#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
};

void push(node** head_ref,int new_data){
    node* new_node= new node();
    new_node->data=new_data;

    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
//iterative code
int getCount(node* head)
{
    int count =0;
    //we are not supposed to alter head pointer.
    node* current = head;
    while(current != NULL){
        count++;
        current=current->next;
    }
    return count;
}

//recursive code
int getcount(node* head){
    if(head== NULL){
        return 0;
    }
    return 1+getcount(head->next);
}

int main()
{
    /* Start with the empty list */
    node* head = NULL;
 
    /* Use push() to construct below list
    1->2->1->3->1 */
    push(&head, 1);
    push(&head, 3);
    push(&head, 1);
    push(&head, 2);
    push(&head, 1);
 
    /* Check the count function */
    cout<<"count of nodes is "<< getcount(head);
}