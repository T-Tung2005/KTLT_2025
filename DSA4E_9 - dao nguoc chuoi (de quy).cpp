#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string rv(string &s)
{
    string tmp="";
    for(int i=s.size()-1;i>=0;i--)
    {
        tmp+=s[i];
    }
    return tmp;
}
int main(){
    int q;
    cin>>q;
    while(q--)
    {
     string s;
     cin>>s;
     cout<<rv(s)<<endl;
    }
}
