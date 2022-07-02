class Solution {
public:
    vector<vector<int>> generate(int x) {
        vector<vector<int>> ans;
        for(int i=1;i<=x;i++)
        {
            vector<int> A;
            for(int j=1;j<=i;j++)
            {
                if(j!=1&&j!=i)
                {
                    A.push_back(ans[i-2][j-1]+ans[i-2][j-2]);
                }
                else A.push_back(1);
            }
            ans.push_back(A);
        }
        return ans;
    }
};
