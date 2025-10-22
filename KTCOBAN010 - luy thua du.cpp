#include <bits/stdc++.h>
using namespace std;
using ll= long long;
const int mod=1e9+7;
long long bilow(long long a,long long n)
{
    if(n==0) return 1;
    ll x=bilow(a,n/2);
    if(n%2==0)
    {
        return x*x%mod;
    }else
     return ((x*x%mod)*(a%mod))%mod;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
    long long a,n;
    cin>>a>>n;
    cout<<bilow(a,n)<<endl;
    }
}
