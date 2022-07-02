class Solution {
public:
    int maxProfit(vector<int>& A) {
        int n=A.size();
        int m=A[n-1],ans=0;
        for(int i=n-1;i>=0;i--)
        {
            m=max(m,A[i]);
            ans=max(ans,m-A[i]);
        }
        return ans;
    }
};
