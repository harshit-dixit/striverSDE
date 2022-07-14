class Solution {
public:
    int findKthLargest(vector<int>& A, int k) {
        int n=A.size();
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<n;i++)
        {
            q.push(A[i]);
            if(q.size()>k)  q.pop();
        }
        return q.top();
    }
};
