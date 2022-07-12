class Solution {
public:
    bool check(int r, int c, vector<string>&A, int n)
    {
        int x=r,y=c;
        while(x>=0&&y>=0)
        {
            if(A[x][y]=='Q')    return false;
            x--;
            y--;
        }
        x=r;
        y=c;
        while(y>=0)
        {
            if(A[x][y--]=='Q')  return false;
        }
        y=c;
        while(y>=0&&x<n)
        {
            if(A[x++][y--]=='Q')    return false;
        }
        return true;
    }
    void f(int c, int n, vector<string>& A, vector<vector<string>>& ans)
    {
        if(c==n)
        {
            ans.push_back(A);
            return;
        }
        for(int r=0;r<n;r++)
        {
            if(check(r,c,A,n))
            {
                A[r][c]='Q';
                f(c+1,n,A,ans);
                A[r][c]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> A(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            A[i]=s;
        }
        f(0,n,A,ans);
        return ans;
    }
};
