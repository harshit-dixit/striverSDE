class MinStack {
public:
    stack<long long> st;
    long long m;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty())
        {
            m=val;
            st.push(val);
            return;
        }
        if(val<m)
        {
            st.push((long long)2*val*1LL - m);
            m=val;
        }
        else    st.push(val);
    }
    
    void pop() {
        if(st.top()<m)
        {
            m=2*m-st.top();
            st.pop();
        }
        else    st.pop();
    }
    
    int top() {
        if(st.top()<m)  return m;
        else    return st.top();
    }
    
    int getMin() {
        return m;
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
