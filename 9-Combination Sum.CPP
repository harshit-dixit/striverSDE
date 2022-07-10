class Solution {
public:
    void f(int ind, int n, int t, vector<int>& ds, vector<vector<int>>& ans,vector<int>& A)
    {
        if(ind==n)
        {
            if(t==0)    ans.push_back(ds);
            return;
        }
        if(A[ind]<=t)
        {
            ds.push_back(A[ind]);
            f(ind,n,t-A[ind],ds,ans,A);
            ds.pop_back();
        }
        f(ind+1,n,t,ds,ans,A);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        f(0,candidates.size(),target,ds,ans,candidates);
        return ans;
    }
};
