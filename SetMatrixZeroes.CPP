//Approach 1


class Solution {
public:
    void fx(vector<vector<int>>& A, int i, int j)
    {
        int m=A.size();
        int n=A[0].size();
        for(int k=0;k<m;k++)    A[k][j]=0;
        for(int k=0;k<n;k++)    A[i][k]=0;
    }
    void setZeroes(vector<vector<int>>& A) {
        int m=A.size();
        int n=A[0].size();
        vector<int> a1(m,0), a2(n,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(A[i][j]==0)
                {
                    a1[i]=1;
                    a2[j]=1;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            if(a1[i]==1)
            {
                for(int k=0;k<n;k++)    A[i][k]=0;
            }
        }
        for(int j=0;j<n;j++)
        {
            if(a2[j]==1)
            {
                for(int k=0;k<m;k++)    A[k][j]=0;
            }
        }
    }
};
