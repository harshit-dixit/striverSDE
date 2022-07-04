class Solution {
public:
    int majorityElement(vector<int>& A) {
        int n=A.size();
        int x=0,y;
        for(int i=0;i<n;i++)
        {
            if(x==0)    y=A[i];
            if(y==A[i]) x++;
            else    x--;
        }
        return y;
    }
};
