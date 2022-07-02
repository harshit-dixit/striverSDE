class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int n=A.size(),x,y;
        for(x=n-2;x>=0;x--)
        {
            if(A[x]<A[x+1]) break;
        }
        if(x<0)
        {
            reverse(A.begin(),A.end());
        }
        else
        {
            for(y=n-1;y>x;y--)
            {
                if(A[y]>A[x])   break;
            }
            swap(A[y],A[x]);
            reverse(A.begin()+x+1,A.end());
        }
    }
};
