//Approach 1
class MyQueue {
public:
    stack<int> st1,st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        while(!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
        int k=st1.top();
        st1.pop();
        return k;
    }
    
    int peek() {
        return st1.top();
    }
    
    bool empty() {
        return st1.empty();
    }
};

//Approach 2
class MyQueue {
public:
    stack<int> st1,st2;
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(!st2.empty())
        {
            int k=st2.top();
            st2.pop();
            return k;
        }
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        int k=st2.top();
            st2.pop();
            return k;
    }
    
    int peek() {
        if(!st2.empty())
        {
            return st2.top();
        }
        while(!st1.empty())
        {
            st2.push(st1.top());
            st1.pop();
        }
        return st2.top();
    }
    
    bool empty() {
        return (st1.empty()&&st2.empty());
    }
};
