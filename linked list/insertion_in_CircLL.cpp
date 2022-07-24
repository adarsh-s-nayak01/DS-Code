#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
};
//if the list is empty.
//time comp : O(1)
node* add_to_empty(node* last,int data){
    if(last!=NULL)
        return last;
    
    node* temp=new node();
    temp->data=data;
    last=temp;
    temp->next=last;

    return last;

}
//insertion at beginning of the list. 
//O(1)
node* add_at_beginning(node* last,int val){
    if(last==NULL)
        return add_to_empty(last,val);
    
    node* temp= new node();
    
    temp->data=val;
    temp->next=last->next;
    last->next=temp;
    // last=last->next; this will increment the last pointer to newly added node.
    

    return last;
}
//insert at the end of the list;
node* add_at_end(node* last,int val){
    node* temp=new node();
    
    temp->data=val;
    //adjust the links.
    temp->next=last->next;
    last->next=temp;
    last=temp;

    return last;
}
//add after certain element.

node* addAfter(node* last,int data,int item){
    if(last == NULL)
        return NULL;
    node* temp,*p;
    p=last->next;

    //for searching the item.
    do{
        if(p->data == item)
        {
            temp=new node();
            temp->data=data;
            temp->next=p->next;
            p->next=temp;

            if(p==last)
                last =temp;
            return last;
        }
        p=p->next;
    }while(p != last->next);

    cout<< item << " not present in the given list. "<<endl;
    return last;
}


