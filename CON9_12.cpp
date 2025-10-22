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
void bfs(int u)
{
    queue<int>q;
    q.push(u);
    kt[u]=true;
    while(!q.empty())
    {
        int x=q.front();q.pop();
        for(int y : vst[x])
        {
            if(!kt[y])
            {
                q.push(y);
                kt[y]=true;
                parent[y]=x;
            }
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
    bfs(s);
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
