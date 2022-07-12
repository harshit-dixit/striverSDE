class Solution {
public:
    bool check(int r, int c, vector<vector<char>>& A, char k)
    {
        for(int i=0;i<9;i++)
        {
            if(A[r][i]==k)  return false;
            if(A[i][c]==k)  return false;
            if(A[3*(r/3)+i/3][3*(c/3)+i%3]==k)    return false;
        }
        return true;
    }
    bool f(vector<vector<char>>& A)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(A[i][j]=='.')
                {
                    for(char c='1';c<='9';c++)
                    {
                        if(check(i,j,A,c))
                        {
                            A[i][j]=c;
                            if(f(A))    return true;
                            else   A[i][j]='.'; 
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        f(board);
    }
};
