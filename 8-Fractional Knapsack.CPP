class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        vector<pair<double,int>> A(n);
        for(int i=0;i<n;i++)
        {
            A[i]={(double)arr[i].value/arr[i].weight,arr[i].weight};
        }
        sort(A.begin(),A.end());
        double x=0;
        int y=0,j=n-1;
        while(j>=0&&y<W)
        {
            int k=W-y;
            k=min(k,A[j].second);
            x+=A[j].first*k;
            y+=k;
            j--;
        }
        return x;
    }
        
};
