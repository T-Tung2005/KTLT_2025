#include <bits/stdc++.h>
using namespace std;
int n,c[100][100],x[100];
int dem[1000];
int ans=INT_MAX;
int sum=0;
int dis=0;
int cmin=INT_MAX;
void try1(int i)
{
    for(int j=1;j<=n;j++)
    {
        if(dem[j]==0)
        {
            x[i]=j;
            dem[j]=1;
            sum+=c[x[i-1]][x[i]];
            if(i==n)
            {
               ans=min(ans,sum+c[x[n]][1]);
            }else if(sum+(n-i+1)*cmin<ans)
            {
               try1(i+1);
            }
            dem[j]=0;
            sum-=c[x[i-1]][x[i]];
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>c[i][j];
            if(c[i][j]) cmin=min(cmin,c[i][j]);
        }
    }
    x[1]=1;
    dem[1]=1;
    try1(2);
    cout<<ans;
    return 0;
}
