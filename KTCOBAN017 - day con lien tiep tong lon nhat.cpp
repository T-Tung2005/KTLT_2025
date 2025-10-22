#include <bits/stdc++.h>
using namespace std;
using ll= long long;
const int mod=1e9+7;
ll f[100];
int kt1(int a[],int l,int r,int mid)
{
    ll suml=0,sumr=0;
    ll maxsuml=0,maxsumr=0;
    for(int i=mid;i>=l;i--)
    {
        suml+=a[i];
        maxsuml=max(maxsuml,suml);
    }
    for(int j=mid+1;j<=r;j++)
    {
        sumr+=a[j];
        maxsumr=max(maxsumr,sumr);
    }
    return maxsuml+maxsumr;

}
int kt(int a[],int l,int r)
{
    if(l==r) return a[l];
    int mid=(l+r)/2;
    return max({
            kt(a,l,mid),
            kt(a,mid+1,r),
            kt1(a,l,r,mid)
               });
}
int main() {
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
     cout<<kt(a,0,n-1)<<endl;
    }
}
