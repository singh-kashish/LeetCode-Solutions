class MedianFinder {
public:
    /** initialize your data structure here. */
    
    MedianFinder() {
        
    }
    //max heap for left side that is smaller elements
    //min heap for right side that is greater elements
    priority_queue<int>s;
    priority_queue<int,vector<int>,greater<int>>g;
    
    void addNum(int x) {
        if(s.empty())s.push(x);
        else{
        if(s.size()>g.size()){
            if(s.top()>x){
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            else{
                g.push(x);
            }
           
        }
        else{
            if(x<=s.top()){
                s.push(x);
            }
            else{
                g.push(x);
                s.push(g.top());
                g.pop();
                
            }
 
        }
        }
    }
    
    double findMedian() {
        if(s.size()-g.size()==1)return s.top();
        else  return (double)(s.top()+g.top())/2;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */