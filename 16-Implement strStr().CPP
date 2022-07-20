class Solution {
public:
    void lp(string s, vector<int> &lps)
    {
        int n=s.length();
        int len=0,i=1;
        lps[0]=0;
        while(i<n)
        {
            if(s[i]==s[len])
            {
                len++;
                lps[i]=len;
                i++;
            }
            else
            {
                if(len!=0)
                {
                    len=lps[len-1];
                }
                else
                {
                    lps[i]=0;
                    i++;
                }
            }
        }
    }
    int strStr(string haystack, string needle) {
        if(needle.empty())  return 0;
        int n=haystack.length(),m=needle.length();
        vector<int> lps(m);
        lp(needle,lps);
        int i=0,j=0;
        while(i<n)
        {
            if(haystack[i]==needle[j])
            {
                i++;
                j++;
                if(j==m)    return i-j;
            }
            else
            {
                if(j!=0)
                {
                    j=lps[j-1];
                }
                else    i++;
            }
        }
        return -1;
    }
};
