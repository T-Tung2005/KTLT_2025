#include <bits/stdc++.h>
using namespace std;
int f[1005];
int a[1005][1005];
const int INF = 1e9;
int main() {
    int q;
    cin>>q;
    while(q--)
    {
    int n,k;
    cin>>n>>k;
    int a[n];
    long long tong=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
       // tong+=a[i];
    }
    memset(f,0,sizeof(f));
    f[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=k;j>=1;j--)
        {
            if(f[j-a[i]])
            {
                f[j]=1;
            }
        }
    }
    if(f[k])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}
