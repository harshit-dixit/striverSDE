class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& A) {
        vector<vector<int>> ans;
        int n=A.size();
        if(n==1)    return A;
        sort(A.begin(),A.end());
        vector<int> temp(2);
        temp[0]=A[0][0];
        temp[1]=A[0][1];
        for(int i=0;i<n;i++)
        {
            if(temp[1]>=A[i][0])    temp[1]=max(temp[1],A[i][1]);
            else
            {
                ans.push_back(temp);
                temp[0]=A[i][0];
                temp[1]=A[i][1];
            }
        }
        ans.push_back(temp);
        return ans;
    }
};
