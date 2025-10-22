#include <bits/stdc++.h>
using namespace std;
int bd(string s)
{
    stack<int>st;
    for(char x: s)
    {
        if(isdigit(x))
        {
            st.push(x-'0');
        }else
        {
            int h=st.top();st.pop();
            int t=st.top();st.pop();
            if(x=='+') st.push(h+t);
            else if(x=='*') st.push(t*h);
            else if(x=='/') st.push(t/h);
            else st.push(t-h);
        }
    }
    return st.top();
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
    string s;
    cin>>s;
    cout<<bd(s)<<endl;
    }
}
