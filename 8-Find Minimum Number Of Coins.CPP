int findMinimumCoins(int amount) 
{
    vector<int> A={1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int n=A.size();
    int x=0;
    for(int i=n-1;i>=0;i--)
    {
        if(A[i]<=amount)
        {
            int k=amount/A[i];
            x+=k;
            amount-=k*A[i];
        }
    }
    return x;
}
