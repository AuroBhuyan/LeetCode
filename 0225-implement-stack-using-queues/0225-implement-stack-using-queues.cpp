class MyStack {
public:

    queue<int> q1,q2;
   
    MyStack() {
        
    }
    
    void push(int x) {
        while(!q1.empty()){
            int top = q1.front();
            q2.push(top);
            q1.pop();
        }

        q1.push(x);

        while(!q2.empty()){
            int top = q2.front();
            q1.push(top);
            q2.pop();
        }
    }
    
    int pop() {
        int top = q1.front();
        q1.pop();
        return top;
        q1.pop();
    }
    
    int top() {
        return q1.front();
    }
    
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