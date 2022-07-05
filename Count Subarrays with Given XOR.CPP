#include <bits/stdc++.h> 
int subarraysXor(vector<int> &A, int x)
{
    unordered_map<int,int> mp;
    int n=A.size();
    int ans=0,s=0;
    for(int i=0;i<n;i++)
    {
        s^=A[i];
        if(s==x)    ans++;
        if(mp.count(s^x))    {ans+=mp[s^x];}
        mp[s]++;
    }
    return ans;
}
