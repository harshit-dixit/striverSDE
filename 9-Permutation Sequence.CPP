class Solution {
public:
    string getPermutation(int n, int k) {
        int f=1;
        vector<int> A;
        for(int i=1;i<n;i++)
        {
            f*=i;
            A.push_back(i);
        }
        A.push_back(n);
        k--;
        string ans="";
        while(1)
        {
            ans+=to_string(A[k/f]);
            A.erase(A.begin()+k/f);
            if(A.size()==0) break;
            k%=f;
            f/=A.size();
        }
        return ans;
    }
};
