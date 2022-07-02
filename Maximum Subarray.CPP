class Solution {
public:
    int maxSubArray(vector<int>& A) {
        int n=A.size();
        int x=0,ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            x+=A[i];
            ans=max(x,ans);
            if(x<0) x=0;
        }
        return ans;
    }
};
