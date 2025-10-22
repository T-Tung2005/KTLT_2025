#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
   string s;
   cin>>s;
   vector<char>v;
   for(int i=0;i<s.size();i++)
   {
       if(isdigit(s[i])){
       v.push_back(s[i]);
       }
   }
     cout<<v.size()<<endl;
    }
}
