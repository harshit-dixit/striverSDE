class Solution{
    public:
    void f(int i, int j, vector<vector<int>> &A, int n, string ds, vector<string> &ans, vector<vector<int>> &vis)
    {
        if(i==n-1&&j==n-1)
        {
            ans.push_back(ds);
            return;
        }
        if(i+1<n&&vis[i+1][j]!=1&&A[i+1][j]==1)
        {
            vis[i][j]=1;
            f(i+1,j,A,n,ds+'D',ans,vis);
            vis[i][j]=0;
        }
        if(j-1>=0&&vis[i][j-1]!=1&&A[i][j-1]==1)
        {
            vis[i][j]=1;
            f(i,j-1,A,n,ds+'L',ans,vis);
            vis[i][j]=0;
        }
        if(j+1<n&&vis[i][j+1]!=1&&A[i][j+1]==1)
        {
            vis[i][j]=1;
            f(i,j+1,A,n,ds+'R',ans,vis);
            vis[i][j]=0;
        }
        if(i-1>=0&&vis[i-1][j]!=1&&A[i-1][j]==1)
        {
            vis[i][j]=1;
            f(i-1,j,A,n,ds+'U',ans,vis);
            vis[i][j]=0;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> ans;
        string ds="";
        vector<vector<int>> vis(n,vector<int>(n,0));
        if(m[0][0]==1)  f(0,0,m,n,ds,ans,vis);
        return ans;
    }
};
