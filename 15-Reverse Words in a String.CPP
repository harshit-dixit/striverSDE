class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        s+=' ';
        int n=s.length(),k=0;
        for(int i=0;i<n;i++)
        {
            if(i>=1&&s[i]==' '&&s[i-1]!=' ')
            {
                ans=s.substr(k,i-k)+' '+ans;
            }
            if(s[i]==' ')   k=i+1;
        }
        return ans.substr(0,ans.length()-1);
    }
};
