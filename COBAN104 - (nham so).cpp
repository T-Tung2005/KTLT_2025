#include<bits/stdc++.h>
using namespace std;
 long long doi(long long n,char p , char q)
{
    string tmp=to_string(n);
    for(int i=0;i<tmp.size();i++)
    {
        if(tmp[i]==p)
        {
            tmp[i]=q;
        }
    }
    return stoll(tmp);
    }
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b;
        cin>>a>>b;
        cout<<doi(a,'5','3')+doi(b,'5','3')<<" ";
        cout<<doi(a,'3','5')+doi(b,'3','5')<<endl;
    }
}
