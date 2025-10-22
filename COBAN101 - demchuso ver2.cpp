#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int dem[10];
void tach(long long n)
{
    if(n==0)
    {
        dem[0]++;
        return;
    }
    while(n!=0)
    {
        int r=n%10;
        dem[r]++;
        n/=10;
    }
}
int main() {
    int q;
    cin>>q;
    while(q--)
    {
    int a,b;
    cin>>a>>b;
    int h=min(a,b);
    int t=max(a,b);
    for(int i=h;i<=t;i++)
    {
        tach(i);
    }
    for(int i=0;i<=9;i++)
    {
        cout<<dem[i]<<" ";
    }
    memset(dem,0,sizeof(dem));
    cout<<endl;
    }
}
