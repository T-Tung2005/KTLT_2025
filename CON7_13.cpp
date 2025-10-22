#include <bits/stdc++.h>
using namespace std;
using ll= long long;
const int mod=1e9+7;
string bd(string s)
{
    stack<string>st;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(isalpha(s[i]))
        {
            st.push(string(1,s[i]));//t?o m?t chu?i string có d? dài 1
        }else
        {
            string h=st.top();st.pop();
            string t=st.top();st.pop();
            string tmp=h+t+s[i];
            st.push(tmp);
        }
    }
    return st.top();
}
int main() {
     int q;
     cin>>q;
     while(q--)
     {
         string s;
         cin>>s;
         cout<<bd(s)<<endl;
     }
}
