#include <bits/stdc++.h>
using namespace std;
using ll= long long;
const int mod=1e9+7;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    return a.second<b.second;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
    int n;
    cin>>n;
    int a[n];
    for(int &x :a) cin>>x;
    sort(a,a+n);
    long long res=0;
    for(int i=0;i< n;i++)
    {
        res+=1ll*a[i]*i;
        res%=mod;
    }
    cout<<res<<endl;
    }
}
