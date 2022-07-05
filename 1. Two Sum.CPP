class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        vector<pair<int,int>> A;
        int n=nums.size();
        for(int i=0;i<n;i++)    A.push_back({nums[i],i});
        sort(A.begin(),A.end());
        int i=0,j=n-1;
        while(i<j)
        {
            int k=A[i].first+A[j].first;            
            if(k==t)    return {A[i].second,A[j].second};
            else if(k<t)    i++;
            else j--;
        }
        return {};
    }
};
