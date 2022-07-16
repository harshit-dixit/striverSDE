class Solution {
public:
    int largestRectangleArea(vector<int>& A) {
        int n=A.size();
        stack<pair<int,int>> st1,st2;
        vector<int> L(n),R(n);
        for(int i=0;i<n;i++)
        {
            while(!st1.empty()&&st1.top().first>=A[i])  st1.pop();
            if(st1.empty()) L[i]=-1;
            else    L[i]=st1.top().second;
            st1.push({A[i],i});
        }
        for(int i=n-1;i>=0;i--)
        {
            while(!st2.empty()&&st2.top().first>=A[i])  st2.pop();
            if(st2.empty()) R[i]=n;
            else    R[i]=st2.top().second;
            st2.push({A[i],i});
        }
        int m=0;
        for(int i=0;i<n;i++)    m=max(m,(R[i]-L[i]-1)*A[i]);
        return m;
    }
};
