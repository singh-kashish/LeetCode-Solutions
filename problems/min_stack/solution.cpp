class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    stack<int>m;
    stack<int>s;
    
    void push(int val) {
        if(s.empty()){
            m.push(val);
        }
        else if(val<=getMin()){
            m.push(val);
        }
        s.push(val);
    }
    
    void pop() {
        if(s.empty())return;
        else{
            if(s.top()==getMin())m.pop();
        }
        s.pop();
        return;
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        if(m.empty())return -1;
        else return m.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */