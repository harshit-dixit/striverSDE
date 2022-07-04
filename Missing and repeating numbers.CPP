#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &A, int n)
{
    long long s=0,sq=0;
    for(int i=0;i<n;i++)
    {
        s+=A[i]-(i+1);
        sq+=A[i]*A[i]-((i+1)*(i+1));
    }
    long long x=(long long)sq/s;
    x=(long long)(x+s)/2;
    vector<int> ans(2);
    ans[0]=x;
    ans[1]=x-s;
    return make_pair(ans[1],ans[0]);
}
