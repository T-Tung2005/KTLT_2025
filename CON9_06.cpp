#include <bits/stdc++.h>
using namespace std;
int n,m,s;
vector<int>ke[10005];
bool ads[10005];
void nhap()
{
    cin>>n>>m>>s;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}
void dfs(int u)
{
    cout<<u<<" ";
    ads[u]=true;
    for(int v : ke[u])
    {
        if(!ads[v])
        {
            dfs(v);
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
   cout<<endl;
  }
}
