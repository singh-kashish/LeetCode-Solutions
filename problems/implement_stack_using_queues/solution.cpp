class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
  
    }
    queue<int>q1;
  
    
    /** Push element x onto stack. */
    void push(int x) {
     q1.push(x);
        for(int i=0;i<q1.size()-1;i++){
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(q1.empty()==true)return -1;
        int t=q1.front();
        q1.pop();
        return t;
    }
    
    /** Get the top element. */
    int top() {
        if(q1.empty()==true)return -1;
        return q1.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */