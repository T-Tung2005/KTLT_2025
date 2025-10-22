#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--)
    {
    int n;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   priority_queue<int,vector<int>,greater<int>>Q;// th?ng ? dình là nh? nh?t
   for(int x : a) Q.push(x);
   long long ans=0;
   while(Q.size()>1)
   {
       long long t1=Q.top();Q.pop();
       long long t2=Q.top();Q.pop();
       ans+=t1+t2;
       Q.push(t1+t2);
   }
   cout<<ans<<endl;
    }
}
