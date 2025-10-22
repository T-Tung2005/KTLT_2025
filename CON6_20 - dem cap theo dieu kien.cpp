#include <bits/stdc++.h>
using namespace std;
long long timkiem(int a[],int n,int x)
{
    int l=0;
    int r=n-1;
    int res=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]<x)
        {
            res=mid;
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
       sort(a,a+n);
       int dem=0;
       for(int i=0;i<n-1;i++)
       {
           int pos=timkiem(a+i+1,n-i-1,k+a[i]);
           if(pos!=-1)
           {
               dem+=pos+1;
           }
       }
       cout<<dem<<endl;
}
}
