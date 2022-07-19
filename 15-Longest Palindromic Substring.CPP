class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length(),idx=0,l,r,i=0,m=0;
        while(i<n)
        {
            l=i;
            r=i;
            while((r+1)<n&&s[r]==s[r+1])  r++;
            i=r+1;
            while(l>=0&&r<n&&s[r]==s[l])
            {
                l--;
                r++;
            }
            int len=r-l-1;
            if(len>m)
            {
                m=len;
                idx=l+1;
            }
        }
        return s.substr(idx,m);
    }
};
