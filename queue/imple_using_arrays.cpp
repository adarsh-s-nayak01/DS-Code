#include<bits/stdc++.h>
using namespace std;

class Queue{
    public:
    int front,rear,size;
    unsigned capacity;
    int* array;//dynamic array
};
//create a queue of given capacity;
//initializes size of queue as 0
Queue* createQueue(unsigned capacity){
    Queue* queue = new Queue();
    queue->capacity = capacity;
    queue->front=queue->rear=0;
    //this is important so see the enqueue funtion

    queue->rear=capacity-1;
    queue->array=new int[queue->capacity];
    return queue;
}

//Queue is full when size becomes equal to capacity
int isFull(Queue* queue){
    return (queue->size== queue->capacity);
}
int isEmpty(Queue* queue){
    return (queue->size==0);
}

// Function to add an item to the queue.
// It changes rear and size
void enqueue(Queue* queue, int item){
    if(isFull(queue)){
        return;
    }
    queue->rear=(queue->rear+1)% queue->capacity;
    queue->array[queue->rear]=item;
    queue->size=queue->size+1;
    cout<<item<<" enqueued to queue\n";
}

//function to remove an item from the queue.
//it changes the front and size.
int dequeue(Queue* queue){
    if(isEmpty(queue))
        return INT_MIN;
    int item=queue->array[queue->front];
    queue->front=(queue->front+1)%queue->capacity;
    queue->size = queue->size -1;
    return item;
}

int front(Queue* queue){
    if(isEmpty(queue)){
        return INT_MIN;

    }
    return queue->array[queue->front];
}

int rear(Queue* queue){
    if(isEmpty(queue)){
        return INT_MIN;
    }
    return queue->array[queue->rear];
}

int main()
{
    Queue* queue = createQueue(1000);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);

    cout<<dequeue(queue)<<" dequeued from queue\n";

    cout<<"Front item is "<<front(queue)<<endl;
    cout<<"Rear item is "<< rear(queue)<<endl;

    return 0;
}
