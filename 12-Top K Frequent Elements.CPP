class Solution {
public:
    vector<int> topKFrequent(vector<int>& A, int k) {
        unordered_map <int,int> m;
        int n=A.size();
        for(int i=0;i<n;i++)    m[A[i]]++;
        priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        for(auto it:m)
        {
            q.push({it.second,it.first});
            if(q.size()>k)  q.pop();
        }
        vector<int> ans;
        while(!q.empty())
        {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};
