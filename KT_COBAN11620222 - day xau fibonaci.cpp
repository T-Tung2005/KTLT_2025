#include <bits/stdc++.h>
using namespace std;
using ll= long long;
ll f[100];
char fibo(int n,ll k){
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(k<=f[n-2])
      return fibo(n-2,k);
    else
        return fibo(n-1,k-f[n-2]);

}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
    long long n,k;
    cin>>n>>k;
   f[1]=1;
   f[2]=1;
   for(int i=3;i<=92;i++)
   {
       f[i]=f[i-1]+f[i-2];
   }
   cout<<fibo(n,k)<<endl;
    }
}
