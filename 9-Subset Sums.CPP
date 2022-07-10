class Solution
{
public:
    void f(int ind, vector<int>& A, int sum, vector<int> &ans)
    {
        if(ind==-1)
        {
            ans.push_back(sum);
            return;
        }
        f(ind-1,A,sum+A[ind],ans);
        f(ind-1,A,sum,ans);
    }


    vector<int> subsetSums(vector<int> arr, int N)
    {
        int n=arr.size();
        vector<int> ans;
        f(n-1,arr,0,ans);
        return ans;
    }
};
