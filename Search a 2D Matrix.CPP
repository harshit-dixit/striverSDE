class Solution {
public:
    bool searchMatrix(vector<vector<int>>& A, int t) {
        int m=A.size();
        int n=A[0].size();
        int l=0,r=m*n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            int i=mid/n;
            int j=(mid%n);
            if(A[i][j]==t)  return true;
            else if(A[i][j]<t)  l=mid+1;
            else    r=mid-1;
        }
        return false;
    }
};
