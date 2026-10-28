class MinStack {
public:
    stack<int>s;
    stack<int>minS;
    MinStack() {
    }
    int mini=INT_MAX;
    
    void push(int value) {
        if(minS.empty()){
            minS.push(value);
        }else{
            minS.push(min(value,minS.top()));
        }
        s.push(value);
    }
    
    void pop() {
        s.pop();
        minS.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minS.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna