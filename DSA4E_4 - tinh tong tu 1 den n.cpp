#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll tong(long long n)
{
    if(n==0) return 0;
    else return n+tong(n-1);
}
int main(){
    int q;
    cin>>q;
    while(q--)
    {
    int n;
    cin>>n;
    cout<<tong(n)<<endl;
    }
}
