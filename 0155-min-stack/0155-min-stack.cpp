class MinStack {
public:
    stack<int>a,b;
    MinStack() {
        a=b;
    }
    
    void push(int val) {
        a.push(val);
    }
    
    void pop() {
        a.pop();
    }
    
    int top() {
    return a.top();        
    }
    
    int getMin() {
        int x=INT_MAX;
        while(!a.empty()){
            x=min(a.top(),x);
            b.push(a.top());
            a.pop();
        }
        while(!b.empty()){
            // x=min(a.top(),x);
            a.push(b.top());
            b.pop();
        }
        return x;
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