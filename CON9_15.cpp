#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int>ke[10005];
bool ads[10005];
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
void dfs(int u)
{
    //cout<<u<<" ";
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
   int dem=0;
   for(int i=1;i<=n;i++)
   {
       if(!ads[i]){
       dem++;
       dfs(i);
       }
   }
   cout<<dem<<endl;
  }
}
