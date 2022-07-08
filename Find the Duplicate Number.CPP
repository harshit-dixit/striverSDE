class Solution {
public:
    int findDuplicate(vector<int>& A) {
        int n=A.size();
        int slow=A[0];
        int fast=A[A[0]];
        while(fast!=slow)
        {
            slow=A[slow];
            fast=A[A[fast]];
        }
        fast=A[0];
        slow=A[slow];
        while(slow!=fast)
        {
            fast=A[fast];
            slow=A[slow];
        }
        return slow;
    }
};
