class Solution
  {
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> m;
        for(int i=0;i<n;i++)
        {
            m.push_back({end[i],start[i]});
        }
        sort(m.begin(),m.end());
        int ans=0,limit=-1;
        for(auto it:m)
        {
            if(it.second>limit)  
            {
                ans++;
                limit=it.first;
            }
        }
        return ans;
    }
};
