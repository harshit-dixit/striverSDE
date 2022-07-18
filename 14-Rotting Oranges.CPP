class Solution {
public:
    int orangesRotting(vector<vector<int>>& A) {
        if(A.empty())   return 0;
        int n=A.size(),m=A[0].size(),t=0,c=0,ans=0;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(A[i][j]!=0)  t++;
                if(A[i][j]==2)  q.push({i,j});
            }
        }
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        while(!q.empty())
        {
            int k=q.size();
            c+=k;
            while(k--)
            {
                int x=q.front().first,y=q.front().second;
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int nx=x+dx[i],ny=y+dy[i];
                    if(nx<0||ny<0||nx>=n||ny>=m||A[nx][ny]!=1)  continue;
                    A[nx][ny]=2;
                    q.push({nx,ny});
                }
            }
            if(!q.empty())  ans++;
        }
        return c==t?ans:-1;
    }
};
