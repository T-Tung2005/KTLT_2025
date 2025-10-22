#include <bits/stdc++.h>
using namespace std;
using ll= long long;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
    long long l,r;
    cin>>l>>r;
    int dem=0;
    ll h=ceil(sqrt(l));
    ll t=floor(sqrt(r));
    cout<<t-h+1<<endl;
    }
}
