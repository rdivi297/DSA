class MyCircularDeque {
    vector<int> q;
    int f;
    int r;
    int size;
    int capacity;
public:
    MyCircularDeque(int k) {
        q=vector<int>(k);
        f=0;
        r=k-1;
        size=0;
        capacity=k;
    }
    
    bool insertFront(int value) {
        if(isFull()) return false;
        f=(f-1+capacity)%capacity; //if an element is to be added to the left of front
        q[f]=value;
        size++;
        return true;
    
    }
    
    bool insertLast(int value) {
        if(isFull()) return false;
        r=(r+1)%capacity;
        q[r]=value;
        size++;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;
        f=(f+1)%capacity;
        size--;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;
        r=(r-1+capacity)%capacity;
        size--;
        return true;
    }
    
    int getFront() {
        if(isEmpty()) return -1;
        return q[f];
    }
    
    int getRear() {
         if(isEmpty()) return -1;
        return q[r];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==capacity;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */