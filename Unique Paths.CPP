class Solution {
public:
    int uniquePaths(int m, int n) {
        int k=m+n-2;
        double ans=1;
        for(int i=1;i<m;i++)
        {
            ans*=(double)(k-i+1)/i;
            
        }
        if(ans>int(ans)+0.5)    return ceil(ans);
        return ans;
    }
};
