#include <bits/stdc++.h>
using namespace std;
int n,m,s;
vector<int>vst[10005];
bool kt[10005];
void nhap()
{
    cin>>n>>m>>s;
    for(int i=0;i<m;i++)
    {
        int  x,y;
        cin>>x>>y;
        vst[x].push_back(y);
    }
}
void bfs(int u)
{
    queue<int>q;
    q.push(u);
    kt[u]=true;
    while(!q.empty())
    {
        int x=q.front(); q.pop();
        cout<<x<<" ";
        for(int y : vst[x])
        {
            if(!kt[y]){
                q.push(y);
                kt[y]=true;
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
   cout<<endl;
   }
}
