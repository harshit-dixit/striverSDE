class Solution {
public:
    void f(int ind, int n, string s, vector<string>& ds, vector<vector<string>>& ans)
    {
        if(ind==n)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<n;i++)
        {
            if(check(s,ind,i))
            {
                ds.push_back(s.substr(ind,i-ind+1));
                f(i+1,n,s,ds,ans);
                ds.pop_back();
            }
        }
    }
    bool check(string s, int i, int j)
    {
        while(i<j)
        {
            if(s[i++]!=s[j--])  return false;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<string> ds;
        vector<vector<string>> ans;
        f(0,s.length(),s,ds,ans);
        return ans;
    }
};
