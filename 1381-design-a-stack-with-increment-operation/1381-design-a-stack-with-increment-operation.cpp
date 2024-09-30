class CustomStack {
    int top;
    vector<int>st;
    int size;
    int cap;
public:
    CustomStack(int maxSize) {
        top=-1;
        cap=maxSize;
        st = vector<int>(cap);
        size=0;
    }
    
    void push(int x) {
        if(size==cap) return;
        top++;
        st[top]=x; 
        size++;
    }
    
    int pop() {
        if(size==0) return -1;
        int x=st[top];
        top--;
        size--;
        return x;
    }
    
    void increment(int k, int val) {
        for(int i=0;i<min(k,size);i++){
            st[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */