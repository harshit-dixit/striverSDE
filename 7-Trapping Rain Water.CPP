class Solution {
public:
    int trap(vector<int>& A) {
        int n=A.size();
        int l=0,r=n-1,lmax=0,rmax=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(A[l]<=A[r])
            {
                if(A[l]>=lmax)  lmax=A[l];
                else    ans+=lmax-A[l];
                l++;
            }
            else
            {
                if(A[r]>=rmax)  rmax=A[r];
                else    ans+=rmax-A[r];
                r--;
            }
        }
        return ans;
    }
};
