//Approach 1
class MyStack {
public:
    queue<int> q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    
    int pop() {
        int k=q1.front();
        q1.pop();
        return k;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

//Approach 2
void push(int x) {
        q1.push(x);
        int n=q1.size();
        for(int i=1;i<n;i++)
        {
            q1.push(q1.front());
            q1.pop();
        }
    }
