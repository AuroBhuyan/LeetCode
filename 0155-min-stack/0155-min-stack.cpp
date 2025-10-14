class MinStack {
public:
    vector<vector<int>> stk;

    MinStack() {
        
    }
    
    void push(int val) {
        int minEle = getMin();
        if(stk.empty() || minEle>val) minEle = val;

       stk.push_back({val,minEle}); 
    }
    
    void pop() {
        stk.pop_back();
    }
    
    int top() {
        return stk.empty()? -1:stk.back()[0];
    }
    
    int getMin() {
        return stk.empty()?-1:stk.back()[1];
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