#include <bits/stdc++.h>
using namespace std;
int f[1005];
int a[1005][1005];
using ll= long long;
const int INF = 1e9;
int main() {
   int q;
   cin>>q;
   while(q--)
   {
       int n,m;
       cin>>n>>m;
       int a[n],b[m];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       for(int j=0;j<m;j++)
       {
           cin>>b[j];
       }
       sort(a,a+n);
       sort(b,b+m);
       cout<<1ll*a[n-1]*b[0]<<endl;
   }
}
