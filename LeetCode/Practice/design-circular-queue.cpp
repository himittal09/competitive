class MyCircularQueue {
    int *myQ;
    int front;
    int rear;
    int size;
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
        this->myQ = new int[k+1];
        this->front = this->rear = 0;
        this->size = k+1;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
        if (isFull())
        {
            return false;
        }
        rear = (rear + 1) % size;
        myQ[rear] = value;
        return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
        if (isEmpty())
        {
            return false;
        }
        front = (front + 1) % size;
        return true;
    }
    
    /** Get the front item from the queue. */
    int Front() {
        if (isEmpty())
        {
            return -1;
        }
        return myQ[front];
    }
    
    /** Get the last item from the queue. */
    int Rear() {
        if (isEmpty())
        {
            return -1;
        }
        return myQ[rear];
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
        return front == rear;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
        return (rear+1) % size == front;
    }
};
