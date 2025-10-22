#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int main()
{
   int q;
   cin>>q;
   while(q--)
   {
       int n;cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       priority_queue<int,vector<int>,greater<int>>q;
       for(int x : a)
       {
           q.push(x);
       }
       long long dem=0;
       while(q.size()>=2)
       {
           long long t=q.top();q.pop();
           long long h=q.top();q.pop();
           dem+=t+h;
           dem%=mod;
           q.push(t+h);
       }
       cout<<dem<<endl;
   }
}
