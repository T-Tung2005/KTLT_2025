#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int n,k;
char a[1005];
int ok;
int th(int n, long long k)
{
    if(k==(ll)pow(2,n-1))
        return n;
    if(k<(ll)pow(2,n-1))
        return th(n-1,k);
    else return th(n-1,k-(ll)pow(2,n-1));
}
int main() {
   int q;
   cin >>q;
   while(q--)
   {
       int n,k;
       cin>>n>>k;
       cout<<th(n,k)<<endl;
   }
}
