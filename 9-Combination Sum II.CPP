class Solution {
public:
    void f(int ind, int n, int t, vector<int>& A, vector<int>& ds, vector<vector<int>>& ans)
    {
        if(t==0)    ans.push_back(ds);
        for(int i=ind;i<n;i++)
        {
            if(i!=ind&&A[i]==A[i-1])    continue;
            if(A[i]>t)  break;
            ds.push_back(A[i]);
            f(i+1,n,t-A[i],A,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        f(0,candidates.size(),target,candidates,ds,ans);
        return ans;
    }
};
