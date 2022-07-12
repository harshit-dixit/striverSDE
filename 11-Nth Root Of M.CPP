double check(double x, int n)
{
    double ans=1;
    for(int i=0;i<n;i++)    ans*=x;
    return ans;
}
double findNthRootOfM(int n, long long m) {
    double q=1e-8;
    double l=1, h=m;
    while((h-l)>q)
    {
        double mid=(h+l)/2.0;
        if(check(mid,n)<m)    l=mid;
        else    h=mid;
    }
    //return (h+l)/2.0;
    return l;
}
