class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& A) {
        int ans=0,x=0,n=A.size();
        for(int i=0;i<n;i++)
        {
            if(A[i]==1) x++;
            else    x=0;
            ans=max(ans,x);
        }
        return ans;
    }
};
