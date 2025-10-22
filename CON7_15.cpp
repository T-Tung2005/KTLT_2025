#include <bits/stdc++.h>
using namespace std;
string bd(string s)
{
    stack<string>st;
    for(char x: s)
    {
        if(isalpha(x))
        {
            st.push(string(1,x));
        }else
        {
            string h=st.top();st.pop();
            string t=st.top();st.pop();
            string tmp="("+t+x+h+")";
            st.push(tmp);
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
