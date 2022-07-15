class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& A, vector<int>& B) {
        int n1=A.size(),n2=B.size();
        stack<int> st;
        vector<int> ans(n2,-1);
        unordered_map<int,int> mp;
        for(int i=n2-1;i>=0;i--)
        {
            mp[B[i]]=i;
            if(st.empty())  ans[i]=-1;
            else if(st.top()>B[i])  ans[i]=st.top();
            else
            {
                while(st.size()!=0&&st.top()<=B[i]) st.pop();
                if(st.empty())  ans[i]=-1;
                else    ans[i]=st.top();
            }
            st.push(B[i]);
        }
        vector<int> arr(n1,-1);
        for(int i=0;i<n1;i++)
        {
            arr[i]=ans[mp[A[i]]];
        }
        return arr;
    }
};
