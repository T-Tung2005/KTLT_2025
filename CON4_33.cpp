#include <bits/stdc++.h>
using namespace std;
using ll= long long;
const int mod=1e9+7;
int rev(int n)
{
    int s=0;
    while(n!=0)
    {
        s=s*10+n%10;
        n/=10;
    }
    return s;
}
ll bilow(ll n, long long k)
{
    if(k==0) return 1;
    ll x=bilow(n,k/2);
    if(k%2==0)
        return x*x%mod;
    else
        return ((x*x%mod)*(n%mod))%mod;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
    int n;
    cin>>n;
    cout<<bilow(n,rev(n))<<endl;
    }
}
