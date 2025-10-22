#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
//tính du mod c?a cchuooix s?
long long tinhdu( string &s,long long a)
{
    long long ans=0;
    for(char x : s)
    {
        ans=((ans*10)+(x-'0'))%a;
    }
    return (int)ans;
}
//n?u ans=1 thì chia h?t
string kt(long long n)
{
    for(int i=1;i<=200;i++)
    {
        for(int j=0;j<=i;j++)
        {
            //i là d? dài chu?i;
            int b=i-j;//j là s? ch? s? 8 d?u còn b là s? ch? s? 6;
            string tmp(j,'8');
            tmp+=string(b,'6');
            if(tinhdu(tmp,n)==0)
                return tmp;
        }
    }
    return "-1";
}
int main()
{
   int q;
   cin>>q;
   while(q--)
   {
       long long n;
       cin>>n;
       cout<<kt(n)<<endl;
   }
}
