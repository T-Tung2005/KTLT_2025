#include <bits/stdc++.h>
using namespace std;
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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f[k+1]={0};
    f[0]=1;
    for(int i=1;i<=k;i++)
    {
        for(int x : a)
        {
            if(i>=x)
            {
                f[i]+=f[i-x];
                f[i]%=mod;
            }
        }
    }
    cout<<f[k]<<endl;
   }
}
