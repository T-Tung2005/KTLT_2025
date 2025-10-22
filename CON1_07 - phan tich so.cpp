#include <bits/stdc++.h>
using namespace std;
int n,x[100];int ok;
int dc=1;
void sinh()
{
    int i=dc;
    int sum=0;
    while(i>=1&&x[i]==1)
    {
        i--;
        sum++;
    }
    if(i==0) ok=0;
    else
    {
        x[i]--;
        sum++;
        int h=x[i];
        while(sum>h)
        {
            i++;
            x[i]=h;
            sum-=h;
        }
        if(sum>0)
        {
            i++;
            x[i]=sum;
        }
        dc=i;
    }
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
    cin>>n;
    x[1]=n;
    ok=1;
    dc=1;
    vector<vector<int>>v;
    while(ok)
    {
            vector<int>tmp;
            for(int i=1;i<=dc;i++)
            {
                tmp.push_back(x[i]);
            }
            v.push_back(tmp);
           sinh();
    }
    for(auto it :v)
    {
        cout<<"(";
        for(int i=0;i<it.size();i++)
        {
            cout<<it[i];
            if(i!=it.size()-1)
            {
                cout<<" ";
            }else cout<<")"<<" ";
        }
        //cout<<endl;
    }
    cout<<endl;
    }
}
