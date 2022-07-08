class Solution {
public:
    int removeDuplicates(vector<int>& A) {
        int i=0,n=A.size();
        if(n==1)    return 1;
        for(int k=1;k<n;k++)
        {
            if(A[k]!=A[i])
            {
                i++;
                A[i]=A[k];
            }
        }
        return i+1;
    }
};
