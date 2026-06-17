class MinStack {
public:
    MinStack() {
       //stack<int> mainStack;
       //stack<int> minStack;

    }
    stack<int> minStack;
    stack<int> mainStack;
    
    void push(int value) {
        mainStack.push(value);
        if(minStack.empty()||value<=minStack.top()){
            minStack.push(value);
        }
    }
    
    void pop() {
        if(minStack.top()==mainStack.top()){
            minStack.pop();
        }
        mainStack.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return minStack.top();
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
