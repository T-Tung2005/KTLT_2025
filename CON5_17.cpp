#include <bits/stdc++.h>
using namespace std;
int main()
{
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
    long long f[n];
    long long r[n];
    for(int i=0;i<n;i++)
    {
        f[i]=a[i];
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
            {
              f[i]=max(f[i],f[j]+a[i]);
            }
        }
    }
     for(int i=n-1;i>=0;i--)
    {
        r[i]=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
              r[i]=max(r[i],r[j]+a[i]);
            }
        }
    }
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        ans=max(ans,f[i]+r[i]-a[i]);
    }
    cout<<ans<<endl;
    }
}
