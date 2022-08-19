#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
   ListNode *next;
   ListNode *bottom;
//    int flag;
    ListNode(int x) : val(x), next(NULL) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
// class ListNode{
//     public:
//     int val;
//     ListNode* next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
class Solution {
public:

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        while(headA){
            ListNode* temp=headB;
            while(temp){
                if(temp==headA)
                    return headA;
                temp=temp->next;
            }
            headA=headA->next;
        }
        return NULL;
    }
    bool hasCycle(ListNode *head) {
        //floyd cycle detection algo
        // ListNode* slow=head;
        // ListNode* fast=head;
        // while(slow && fast && fast->next){
        //     slow=slow->next;
        //     fast=fast->next->next;
        //     if(slow==fast){
        //         return true;
        //     }
        // }
        // return false;

        //use of hashing
        // unordered_set<ListNode*> s;
        // while(head!=NULL){
        //     if(s.find(head)!=s.end())
        //         return true;
        //     head=head->next;
        // }
        // return false;

        // //if modifying the linked list is allowed,
        // //have flag =0 for all nodes. visit and flag=1;
        // while(head!=NULL){
        //     if(head->flag==1) return true;
        //     head->flag=1;
        //     head=head->next;
        // }
        // return false;

    }
    ListNode* mergeNodes(ListNode* head) {
        //recursive.
        if(head->next==NULL) return NULL;

        ListNode* ptr=head->next;
        int sum=0;
        while(ptr->val!=0){
            sum+=ptr->val;
            ptr=ptr->next;
        }
        head->next->val=sum;
        head->next->next=mergeNodes(ptr);
        return head->next;

        //iterative.
        head=head->next;
        ListNode* start=head;
        while(start){
            ListNode* end=start;
            int sum=0;
            while(end->val!=0){
                sum+=end->val;
                end=end->next;
            }
            start->val=sum;
            start->next=end->next;
            start=start->next;
            
        }
        return head;
    }
    ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
        // int n1=0;int incr=1;
        // while(l1!=NULL){
        //     n1+=(l1->val)*incr;
        //     incr*=10;
        // }
        // incr=1;int n2=0;
        // while(l2!=NULL){
        //     n2+=(l2->val)*incr;
        //     incr*=10;
        // }
        // int sum=n1+n2;
        // struct ListNode* head=NULL;
        // struct ListNode* temp=head;
        // while(sum){
        //     int rem=sum%10;
        //     sum/=10;
        //     struct ListNode* new_node=new ListNode;
        //     new_node->val=rem;
        //     new_node->next=NULL;
        //     if(head==NULL){
        //         head=new_node;
        //         temp=head;
        //     }
        //     else{
        //         temp->next=new_node;
        //         temp=temp->next;
        //     }
        // }
        // return head;
        ListNode* sentinel=new ListNode(0);
        ListNode* d=sentinel;
        int sum=0;
        while(l1!=NULL or l2!=NULL){
            sum/=10;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            d->next=new ListNode(sum%10);
            d=d->next;
        }
        if(sum/10==1){
            d->next=new ListNode(1);
        }
        return sentinel->next;
    }
     ListNode* reverseList(ListNode* head) {
        if(head->next==NULL) return head;//only if one node exists
        
        ListNode* current=head;
        ListNode* prev=NULL;
        ListNode* front=current->next;
        while(current!=NULL){
            current->next=prev;
            prev=current;
            current=front;
            front=front->next;
        }
        head=prev;
        return head;
        
    }
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        ListNode* temp=NULL;
        ListNode* new_head=NULL;
        while(head1!=NULL and head2!=NULL){
            if(head1->val <= head2->val){
                ListNode* new_node=new ListNode(head1->val);
                if(temp==NULL){temp=new_node;new_head=temp;} 
                else {temp->next=new_node;temp=temp->next;}
                head1=head1->next;
            }
            else{
                ListNode* new_node=new ListNode(head2->val);
                if(temp==NULL){temp=new_node;new_head=temp;} 
                else {temp->next=new_node;temp=temp->next;}
                head2=head2->next;
            }
        }
        if(head1==NULL){
            while(head2!=NULL){
                ListNode* new_node=new ListNode(head2->val);
                if(temp==NULL){temp=new_node;new_head=temp;} 
                else{ temp->next=new_node;temp=temp->next;}
                head2=head2->next;
            }
        }
        if(head2==NULL){
            while(head1!=NULL){
                ListNode* new_node=new ListNode(head1->val);
                if(temp==NULL){temp=new_node;new_head=temp;} 
                else {temp->next=new_node;temp=temp->next;}
                head1=head1->next;
            }
        }
        return new_head;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //use of two pointers
        ListNode* start=new ListNode();
        start->next=head;
        ListNode* fast=start;
        ListNode* slow=start;
        for(int i=1;i<=n;++i){
            fast=fast->next;
        }

        while(fast->next !=NULL){
            fast=fast->next;
            slow=slow->next;
        }

        slow->next=slow->next->next;
        return start->next;
    }
    void deleteNode(ListNode* node) {
        if(node->next==NULL){
             node=NULL;
             free(node);
        }
        
        while(node->next!=NULL){
            node->next->val=node->val;
            node=node->next;
        }
        node=NULL;
        free(node);
    }
    //input values into vector or array, reverse it and check.
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        while(head!=NULL){
            v.push_back(head->val);
            head=head->next;
        }
        vector<int> r=v;
        reverse(v.begin(),v.end());
        if(r==v) return true;
        return false;
    }
    
    //reverse the second half and then compare.
    bool isPalindrome(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast and fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode *next,*prev;
        while(slow){
            next=slow->next;
            slow->next=prev;
            prev=slow;
            slow=next;
        }
        fast=head;
        slow=prev;
        while(slow){
            if(fast->val!=slow->val) return false;
            else fast=fast->next,slow=slow->next;
        }
        return true;

    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       while(headA){
            ListNode* temp=headB;
            while(temp){
                if(headA==temp){
                    return temp;
                }
                temp=temp->next;
            }
            headA=headA->next;
       }
       return NULL;

    }
    ListNode* deleteMiddle(ListNode* head) {
        // if(head==NULL)
        //     return NULL;
        // if(head->next==NULL){
        //     delete head;
        //     return NULL;
        // }
        // struct ListNode* temp=head;
        // int ct=0;
        // while(temp){
        //     ct++;
        //     temp=temp->next;
        // }
        // int mid=ct/2;
        // struct ListNode* node=head;
        // for(int i=1;i<mid;++i){
        //     node=node->next;
        // }
        // node->next=node->next->next;
        // return head;
        
        if(head==NULL) return NULL;
        if(head->next==NULL){
            delete head;
            return NULL;
        }
        struct ListNode *slow=head,*fast=head->next->next;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=slow->next->next;
        return head;  
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        struct ListNode* first,*second,*third,*temp=head;
        first=head;
        for(int i=1;i<left;++i){
            temp=temp->next;
        }
        second=temp;
        struct ListNode* prev=NULL,*current=second;
        for(int i=1;i<right-left+1;++i){

        }

    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1) return head;

        ListNode* dummy= new ListNode(0);
        ListNode *pre=dummy,*cur=dummy,*next=dummy;
        dummy->next=head;

        int count=0;
        while(cur->next!=NULL){
            count++;
            cur=cur->next;
        }
        while(count>=k){
            cur=pre->next;
            next=cur->next;
            for(int i=1;i<k;++i){
                cur->next=next->next;
                next->next=pre->next;
                pre->next=next;
                next=cur->next;
            }
            count-=k;
            pre=cur;
        }
        return dummy->next;
    }
    ListNode *detectCycle(ListNode *head) {
        //Hashing is used in here.

        // if(head==NULL || head->next==NULL ) return head;
        // unordered_set<ListNode*> s;
        // s.insert(head);
        
        // while(head!=NULL){
        //     head=head->next;
        //     if(s.find(head)!=s.end()){return head;}
        // }
        // return NULL;

        //slow and fast pointer approach.
        ListNode *slow=head,*fast=head;
        bool intersect=false;
        while(fast || fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){intersect=true;break;}
        }
        if(intersect){
            ListNode* new_node=head;
            while(new_node!=slow){
                slow=slow->next;
                new_node=new_node->next;
            }
            return new_node;
        }
        return NULL;
    }
    ListNode *flatten(ListNode *root){
   // Your code here
    // set<int> s;
    // while(root->next !=NULL){
    //     s.insert(root->val);
    //     ListNode* temp=root->bottom;
    //     while(temp->bottom!=NULL){
    //         s.insert(temp->val);
    //         temp=temp->bottom;
    //     }
    //     s.insert(temp->val);
    // }
    // s.insert(root->val);
    // ListNode* temp=root->bottom;
    // while(temp->bottom!=NULL){
    //     s.insert(temp->val);
    //     temp=temp->bottom;
    // }
    // s.insert(temp->val);
    // ListNode* new_head=NULL,*temp;
    // for(auto &it:s){
    //     ListNode* new_node=new ListNode(it);
    //     if(new_head==NULL){
    //         new_head=new_node;
    //         temp=new_head;
    //     }
    //     else{
    //         temp->next=new_node;
    //         temp=temp->next;
    //     }
    // }

    // return new_head;
    }
    ListNode* removeElements(ListNode* head, int val) {
        // ListNode* prev=new ListNode(0,head);
        // ListNode* new_head=prev;
        // ListNode* next=head;
        // if(head==NULL) return head;
        // while(next!=NULL){
        //     if(next->val==val){
        //         ListNode* temp=next;
        //         prev->next=next->next;
        //         next=prev->next;
        //         temp->next=NULL;
        //         delete temp;
        //     }
        //     else{
        //         next=next->next;
        //         prev=prev->next;
        //     }
        // }
        // return new_head->next;

        //recursive approach.
        if(head==NULL) return head;
        head->next=removeElements(head->next,val);
        return head->val==val? head->next:head;
    }
   
    
};