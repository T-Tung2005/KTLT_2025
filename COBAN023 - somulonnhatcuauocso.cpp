#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
using ll= long long ;
// công th?c legendre
long long legendre(long long n,long long p)
{
    long long dem=0;
    for(long long i=p;i<=n;i*=p)
    {
        dem+=n/i;
    }
    return dem;
}
int main()
{
   int q;
   cin>>q;
   while(q--)
   {
   long long n,p;
   cin>>n>>p;
   cout<<legendre(n,p)<<endl;
   }
}
