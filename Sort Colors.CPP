class Solution {
public:
    void sortColors(vector<int>& A) {
        int x=0,y=0,z=0;
        int n=A.size();
        for(int i=0;i<n;i++)
        {
            switch (A[i])
            {
                case 0: x++;
                        break;
                case 1: y++;
                        break;
                case 2: z++;
                        break;
            }
            
        }
        int k=0;
        while(x!=0)
        {
            A[k]=0;
            k++;
            x--;
        }
        while(y!=0)
        {
            A[k]=1;
            k++;
            y--;
        }
        while(z!=0)
        {
            A[k]=2;
            k++;
            z--;
        }
    }
};
