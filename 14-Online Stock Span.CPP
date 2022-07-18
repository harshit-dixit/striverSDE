class StockSpanner {
public:
    stack<pair<int,int>> st;
    int i=0;
    StockSpanner() {
        
    }
    
    
    int next(int price) {
        while(!st.empty()&&st.top().first<=price)   st.pop();
        if(st.empty())
        {
            st.push({price,i++});
            return i;
        }
        if(st.top().first>price)
        {
            int k=i-st.top().second;
            st.push({price,i++});
            return k;
        }
        return 1;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
