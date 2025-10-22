#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int a[100][100];
int cot[100],cheo[100],cheo1[100];
long long tong=0;
long long ans=0;
int n=8;
int x[100];
void try1(int i)
{
     for(int j=1;j<=n;j++)
     {
         if(cot[j]==0&&cheo[i+j-1]==0&&cheo1[i-j+n]==0)
         {
             x[i]=j;
             cot[j]=1;cheo[i+j-1]=1;cheo1[i-j+n]=1;
             tong+=a[i][j];
             if(i==n)
             {
                 ans=max(ans,tong);
             }else{
                 try1(i+1);
             }
             tong-=a[i][j];
             cot[j]=0;cheo[i+j-1]=0;cheo1[i-j+n]=0;
         }
     }
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
       for(int i=1;i<=8;i++)
       {
           for(int j=1;j<=8;j++)
           {
               cin>>a[i][j];
           }
       }
   try1(1);
   cout<<ans<<endl;
    }
}
