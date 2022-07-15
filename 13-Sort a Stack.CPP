void f(stack<int> &st, int k)
{
    if(st.empty()||st.top()<k)
    {
        st.push(k);
        return;
    }
    int x=st.top();
    st.pop();
    f(st,k);
    st.push(x);
}
void h(stack<int> &st)
{
    if(st.empty())    return;
    int x=st.top();
    st.pop();
    h(st);
    f(st,x);
}
void sortStack(stack<int> &st)
{
    h(st);
}
