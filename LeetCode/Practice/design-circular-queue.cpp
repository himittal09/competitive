class MyCircularQueue {
    int *myQ;
    int front;
    int rear;
    int size;
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
        this->myQ = new int[k];
        this->front = 0;
        this->rear = 0;
        this->size = k;
    }

    ~MyCircularQueue ()
    {
        if (myQ != nullptr)
        {
            delete(myQ);
            myQ = nullptr;
        }
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if ((rear+1) % size == front)
        {
            return false;
        }
        rear = (rear + 1) % size;
        myQ[rear] = value;
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if (front == rear)
        {
            return false;
        }
        front = (front + 1) % size;
        return true;
    }
    
    /** Get the front item from the queue. */
    int Front() {
        return myQ[front];
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        return myQ[rear];
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return front == rear;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        return front != rear;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */