class Solution {
public:
    void f(int ind, int n, vector<int>& A, vector<vector<int>>&ans)
    {
        if(ind==n)
        {
            ans.push_back(A);
            return;
        }
        for(int i=ind;i<n;i++)
        {
            swap(A[i],A[ind]);
            f(ind+1,n,A,ans);
            swap(A[i],A[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& A) {
        vector<vector<int>> ans;
        f(0,A.size(),A,ans);
        return ans;
    }
};
