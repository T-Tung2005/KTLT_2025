#include <bits/stdc++.h>
using namespace std;
using ll= long long;
const int mod=1e9+7;
void kt(string &a,string &b)
{
    while(a.size()<b.size()) a='0'+a;
    while(b.size()<a.size()) b='0'+b;
}
string tong(string a,string b)
{
    ll cary=0;
    long long sum;
    kt(a,b);
    string ans;
    ans=a;
    for(int i=a.size()-1;i>=0;i--)
    {
        sum=a[i]-'0'+b[i]-'0'+cary;
        cary=sum/10;
        ans[i]=(sum%10)+'0';//chuy?n sang chu?i ;
    }
    if(cary==1) ans='1'+ans;
    return ans;

}
int main()
{
    int q;
    cin>>q;
    while(q--){
   string a,b;
   cin>>a>>b;
   cout<<tong(a,b)<<endl;
    }
}
