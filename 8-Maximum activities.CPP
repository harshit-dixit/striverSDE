#include<algorithm>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    int n=start.size();
    vector<pair<int,int>> m;
    for(int i=0;i<n;i++)
    {
        m.push_back({finish[i],start[i]});
    }
    sort(m.begin(),m.end());
    int x=0,limit=-1;
    for(int i=0;i<n;i++)
    {
        if(m[i].second>=limit)
        {
            x++;
            limit=m[i].first;
        }
    }
    return x;
}
