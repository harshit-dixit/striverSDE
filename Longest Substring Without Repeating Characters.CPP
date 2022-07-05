class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> mp;
        int n=s.length(),ans=0,q=0,l=0,r=0;
        while(r<n)
        {
            while(mp.count(s[r]))
            {
                mp.erase(mp.find(s[l]));
                l++;
            }
            mp.insert(s[r]);
            ans=max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
