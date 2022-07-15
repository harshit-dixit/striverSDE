class Queue {
public:
    vector<int> A;
    int f=0,r=0;
    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return A.empty();
    }

    void enqueue(int data) {
        A.push_back(data);
    }

    int dequeue() {
        if(A.empty())    return -1;
        int k=A[0];
        A.erase(A.begin());
        return k;
    }

    int front() {
        if(A.empty())    return -1;
        return A[0];
    }
};
