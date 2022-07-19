class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(),s.end());
        string a=s[0],b=s[s.size()-1],ans="";
        int i=0,n=a.length(),m=b.length();
        while(i<n&&i<m)
        {
            if(a[i]!=b[i])  break;
            ans+=a[i];
            i++;
        }
        return ans;
    }
};
