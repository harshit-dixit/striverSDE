class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        unordered_map<int,int> mp;
        int ans=0,m=0,s=0;
        for(int i=0;i<n;i++)
        {
            s+=A[i];
            m++;
            if(s==0)    ans=m;
            if(mp.count(s)) ans=max(ans,i-mp[s]);
            else    mp[s]=i;
        }
        return ans;
    }
};
