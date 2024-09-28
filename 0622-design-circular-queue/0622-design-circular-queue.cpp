class MyCircularQueue {
     vector<int>q;
        int f;
        int r;
        int cap;
        int size;
public:
    MyCircularQueue(int k) {
       q=vector<int>(k);
        f=0;
        r=-1;
        cap=k;
        size=0;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        r=(r+1)%cap;
        q[r]=value;
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        f=(f+1)%cap;
        size--;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return q[f];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return q[r];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==cap;
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