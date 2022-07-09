int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);
    int i=1,j=0,x=1,mx=1;
    while(i<n&&j<n)
    {
        if(at[i]<=dt[j])
        {
            x++;
            mx=max(x,mx);
            i++;
        }
        else
        {
            j++;
            i++;
        }
    }
    return mx;
}
