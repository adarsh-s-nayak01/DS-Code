#include<bits/stdc++.h>
using namespace std;
//floyd's algo
//************************************************
class node{
    public:
    int data;
    node* next;
};

node *newNode(int key){
    node* temp=new node();
    temp->data=key;
    temp->next=NULL;
    return temp;
};
int countNodes(node* slow_p){
    int count=1;
    node* temp=slow_p;
    while(temp->next != slow_p){
        count++;
        temp=temp->next;
    }
    return count;
}

int countNodesinLoop(node *list)
{
    node* slow_p=list,*fast_p=list;
    while(slow_p && fast_p && fast_p->next){
        slow_p= slow_p->next;
        fast_p=fast_p->next->next;
        if(slow_p == fast_p){cout<<"loop exists "<<endl;return countNodes(slow_p);}
    }
    return 0;
}


int main(){
    node *head=newNode(1);
    head->next=newNode(2);
    head->next->next=newNode(3);
    head->next->next->next=newNode(4);
    head->next->next->next->next=newNode(5);

    //create a loop for testing
    head->next->next->next->next->next=head->next;
    //last node pointing to the second node
    cout<<countNodesinLoop(head) <<endl;

    return 0;

}