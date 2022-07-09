class Solution 
{
    public:
    bool static compare(Job a,Job b)
    {
        return (a.profit>b.profit);
    }
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,compare);
        int mx=0;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,arr[i].dead);
        }
        vector<int> A(mx+1,-1);
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i].dead;j>0;j--)
            {
                if(A[j]==-1)
                {
                    A[j]=arr[i].id;
                    x+=arr[i].profit;
                    y++;
                    break;
                }
            }
        }
        return {y,x};
    } 
};
