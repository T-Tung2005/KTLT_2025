#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll fibo(long long n)
{
    if(n==0||n==1)
        return n;
    else
        return fibo(n-1)+fibo(n-2);
}
int main(){
    int q;
    cin>>q;
    while(q--)
    {
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    }
}
