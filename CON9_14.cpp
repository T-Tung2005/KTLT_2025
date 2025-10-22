#include <bits/stdc++.h>
using namespace std;
int n,m;int dem=0;
vector<int>ke[10005];
bool vst[10005];
int id[1001];
void nhap()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}
void bfs(int u)
{
    queue<int>q;
    q.push(u);
    vst[u]=true;
    while(!q.empty())
    {
        int x=q.front();q.pop();
        id[x]=dem;
        for(int y : ke[x])
        {
            if(!vst[y])
            {
                q.push(y);
                vst[y]=true;
               // parent[y]=x;
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
       for(int i=1;i<=n;i++)
       {
           if(!vst[i])
           {
               dem++;
               bfs(i);
           }
       }
       int truyvan;
       cin>>truyvan;
       while(truyvan--)
       {
           int x,y;
           cin>>x>>y;
           if(id[x]==id[y])
           {
               cout<<"YES"<<endl;
           }else cout<<"NO"<<endl;
       }
      cout<<endl;
   }
}
