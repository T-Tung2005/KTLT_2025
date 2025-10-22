#include <bits/stdc++.h>
using namespace std;
using ll= long long;
//int d[256];
void thuong(string &s)
{
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
    int d[256]={0};
    string s;
    cin>>s;
    thuong(s);
    int max1=0;
   for(char x : s)
   {
         d[x]++;
         max1=max(max1,d[x]);
   }
   int n=s.size();
   if(max1<=(n-1)/2+1)
   {
       cout<<1<<endl;
   }else
    cout<<-1<<endl;
    }
}
