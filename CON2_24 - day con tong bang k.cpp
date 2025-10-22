#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[100];
int x[100];
bool check;
void ql1(int i,int bd,int sum)
{
    for(int j=bd;j<=n;j++)
    {
        x[i]=a[j];
        sum+=a[j];
       if(sum==k)
       {
           check=true;
           cout<<"[";
           for(int h=1;h<=i;h++)
           {
               //sort(x,x+i);
               cout<<x[h];
               if(h==i)
               {
                   cout<<"]"<<" ";
               }else cout<<" ";
           }
       }else if(sum<k)
       {
           ql1(i+1,j+1,sum);
       }
       sum-=a[j];
    }
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long tong=0;
      cin>>n>>k;
      for(int i=1;i<=n;i++)
      {
          cin>>a[i];
          tong+=a[i];
      }
      sort(a+1,a+n+1);
      check=false;
      if(tong<k)
      {
          cout<<"-1"<<endl;
      }else
      {
          ql1(1,1,0);
          if(!check) cout<<"-1"<<endl;
      }
      cout<<endl;
    }
}
