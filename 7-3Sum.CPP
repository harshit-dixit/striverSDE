class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& A) {
        sort(A.begin(),A.end());
        vector<vector<int>> ans;
        int i,j,k,n=A.size();
        for(i=0;i<n-2;i++)
        {
            j=i+1;
            k=n-1;
            while(j<k)
            {
                int x=A[j]+A[k];
                int y=-A[i];
                if(x==y)
                {
                    vector<int> temp(3,0);
                    temp[0]=A[i];
                    temp[1]=A[j];
                    temp[2]=A[k];
                    ans.push_back(temp);
                    while(j<n-1&&A[j+1]==A[j]) j++;
                    j++;
                    while(k>1&&A[k-1]==A[k]) k--;
                    k--;
                }
                else if(x<y)
                {
                    while(j<n-1&&A[j+1]==A[j]) j++;
                    j++;
                }
                else
                {
                    while(k>1&&A[k-1]==A[k]) k--;
                    k--;
                }
            }
            while(i<n-3&&A[i]==A[i+1])  i++;
        }
        return ans;
    }
};
