#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
    long long x,y,m;
    cin>>x>>y>>m;
    long long scl=m/x;
    long long tong=scl;
    while(tong>=y)
    {
        long long h=tong/y;
        scl+=h;
        tong=tong%y+h;
    }
    cout<<scl<<endl;
    }
}
