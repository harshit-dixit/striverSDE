class Solution {
public:
    void f(int ind, int n, vector<int>& A, vector<int>& ds, vector<vector<int>> &ans)
    {
        ans.push_back(ds);
        for(int i=ind;i<n;i++)
        {
            if(i!=ind&&A[i]==A[i-1])    continue;
            ds.push_back(A[i]);
            f(i+1,n,A,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        f(0,nums.size(),nums,ds,ans);
        return ans;
    }
};
