class MyQueue {
    stack<int>s1,s2;
    int front=-1;
public:
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        if(s1.empty())front=x;
        s1.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int res;
        if(s1.empty())return -1;
        while(s1.empty()==false){
            int temp=s1.top();
            s1.pop();
            s2.push(temp);
        }
        res=s2.top();
        s2.pop();
        if(s2.empty()==false)front=s2.top();
        while(s2.empty()==false){
            
            int temp=s2.top();
            s2.pop();
            s1.push(temp);
        }
        return res;
        
    }
    
    /** Get the front element. */
    int peek() {
        if(s1.empty())return -1;
        return front;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return (s1.empty() and s2.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */