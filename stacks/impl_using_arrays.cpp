#include<bits/stdc++.h>
using namespace std;

#define MAX 1000


class Stack{
    int top;//for every stack the top is unique.
    
    public:
    int a[MAX];

    Stack() {top=-1;}
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();

};

bool Stack::push(int x){
    if(top>= MAX-1){cout<<"overflow cond"<<endl;return false;}
    else{
        a[++top]=x;
        cout<<x<<" pushed into the stack\n";
        return true;
    }

}

int Stack::pop(){
    if(top<0){
        cout<<"underflow condition\n";
        return 0;
    }
    else{
        int x=a[top--];
        return x;
    }
}

int Stack::peek(){
    if(top<0){
        cout<<"stack is empty\n";
        return 0;
    }
    else{
        int x=a[top];
        return x;
    }
}

bool Stack::isEmpty(){
    return (top<0);
}

int main(){
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << s.pop() << " Popped from stack\n";
    cout<<"Top element is : "<<s.peek()<<endl;
    cout<<"Element in the stack are : ";
    while(!s.isEmpty()){
        cout<<s.peek()<<" ";
        s.pop();
    }
    return 0;
}