#include <bits/stdc++.h>
using namespace std;
using ll= long long;
const int mod=1e9+7;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int &x:a) cin>>x;
    sort(a,a+n);
    int h=min(k,n-k);
    ll t1=0,t2=0;
    for(int i=0;i<n;i++)
    {
        if(i<h) t1+=a[i];
        else t2+=a[i];
    }
    cout<<t2-t1<<endl;
    }
}// tham lam
