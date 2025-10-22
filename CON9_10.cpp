#include <bits/stdc++.h>
using namespace std;
int n,m,s,t;
vector<int>vst[10005];
bool kt[10005];
int parent[10005];
void nhap()
{
    cin>>n>>m>>s>>t;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        vst[x].push_back(y);
        vst[y].push_back(x);
    }
}
void dfs(int u)
{
    kt[u]=true;
    for(int v : vst[u])
    {
        if(!kt[v])
        {
            dfs(v);
            parent[v]=u;
            //dfs(v);
        }
    }
}

int main()
{
   int q;
   cin>>q;
   while(q--)
   {
    nhap();
    dfs(s);
    if(!kt[t])
    {
        cout<<"-1"<<endl;
    }else{
        vector<int>v;
        while(t!=s)
        {
            v.push_back(t);
            t=parent[t];
        }
        v.push_back(s);
        reverse(v.begin(),v.end());
        for(int x : v)
        {
            cout<<x<<" ";
        }
    }
    cout<<endl;
   }
}
