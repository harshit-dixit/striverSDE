class Solution {
public:
    void rotate(vector<vector<int>>& A) {
        int n=A.size();
        vector<vector<int>> B=A;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                A[i][j]=B[n-j-1][i];
            }
        }
    }
};
