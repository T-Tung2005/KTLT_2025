#include <bits/stdc++.h>
using namespace std;
using ll= long long;
long long tong(long long a, long long b)
{
    return 1ll*(a+b);
}
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
    sort(a,a+n);
    long long s1=0;
    long long s2=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0) {
            s1=s1*10+a[i];
        }else
            s2=s2*10+a[i];
    }
    cout<<tong(s1,s2)<<endl;
    }
}
