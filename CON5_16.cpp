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
    sort(f,f+n,greater<int>());
    cout<<f[0]<<endl;
    }

