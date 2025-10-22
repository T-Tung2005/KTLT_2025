#include <bits/stdc++.h>
using namespace std;
int firstpost(int a[],int n,int x)
{
    int l=0;int r=n-1;
    int res=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x)
        {
            res=mid;
            r=mid-1;
        }else if(a[mid]<x)
        {
            l=mid+1;
        }else{
         r=mid-1;
        }
    }
    return res;
}
int lastpost(int a[],int n,int x)
{
    int l=0;int r=n-1;
    int res=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x)
        {
            res=mid;
            l=mid+1;
        }else if(a[mid]<x)
        {
            l=mid+1;
        }else{
         r=mid-1;
        }
    }
    return res;
}
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
    int dem=0;
    int h=lastpost(a,n,k);
    int t=firstpost(a,n,k);
    if(h==-1&&t==-1)
    {
        cout<<-1<<endl;
    }else
    {
        cout<<h-t+1<<endl;
    }
}
}
