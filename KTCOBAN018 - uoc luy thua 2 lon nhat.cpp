#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
using ll= long long ;
int main()
{
   int q;
   cin>>q;
   while(q--)
   {
   long long n;
   cin>>n;
   long long dem=0;
   for(long long i=2;i<=n;i*=2)
   {
       dem+=n/i;
   }
   cout<<dem<<endl;
   }
}
