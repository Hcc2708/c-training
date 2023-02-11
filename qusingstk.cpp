class MyQueue {
public:
    stack<int>stk1;
    stack<int>stk2;
    MyQueue() {
        
    }
    
    void push(int x) {
        stk1.push(x);
    }
    
    int pop() {
        int x;
        while(!stk1.empty())
        {
            x = stk1.top();
            stk2.push(x);
            stk1.pop();
        }
        stk2.pop();
        while(!stk2.empty())
        {
            stk1.push(stk2.top());
            stk2.pop();
        }
        return x;
    }
    
    int peek() {
          int x;
        while(!stk1.empty())
        {
            x = stk1.top();
            stk2.push(x);
            stk1.pop();
        }
        while(!stk2.empty())
        {
            stk1.push(stk2.top());
            stk2.pop();
        }
        return x;
    }
    
    bool empty() {
        return stk1.empty();
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