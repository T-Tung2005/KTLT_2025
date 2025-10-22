#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int n,m,s;
vector<int>ke[1005];
int dd[1000001];
void nhap()
{
    cin>>n>>m>>s;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        ke[x].push_back(y);
    }
}
void DFS(int u)
{
   cout<<u<<" ";
   dd[u]=1;
   for(int v : ke[u])
   {
       if(dd[v]==0)
       {
           DFS(v);
       }
   }
}
int main(){
    int q;
    cin>>q;
    while(q--)
    {
    nhap();
    DFS(s);
    }
}
