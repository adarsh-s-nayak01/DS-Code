#include<bits/stdc++.h>
using namespace std;
//find if the linked list has a loop.
//use unordered_set(node*)
class node{
    public:
    int data;
    node* next;
};

void push(node** head_ref, int new_data)
{
    
    node* new_node = new node();
    new_node->data = new_data;

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
//detect if the loop is found
bool detectLoop(node* head){
    unordered_set<node*> s;
    while(head != NULL){
        if(s.find(head) != s.end())
            return true;

        s.insert(head);
        head=head->next;
    }
    return false;
}

int main()
{
    /* Start with the empty list */
    node* head = NULL;
  
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
  
    /* Create a loop for testing */
    head->next->next->next->next = head;
  
    if (detectLoop(head))
        cout << "Loop found";
    else
        cout << "No Loop";
  
    return 0;
}
