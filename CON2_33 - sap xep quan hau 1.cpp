#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int x[100];
int n;
vector<string>v;
int a[100][100];
string s;
int cot[100],cheo[100],cheo1[100];
int dem=0;
void try1(int i)
{
     for(int j=1;j<=n;j++)
     {
         if(cot[j]==0&&cheo[i+j-1]==0&&cheo1[i-j+n]==0)
         {
             x[i]=j;
             cot[j]=1;cheo[i+j-1]=1;cheo1[i-j+n]=1;
             if(i==n)
             {
                 dem++;
             }else try1(i+1);
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
        dem=0;
    cin>>n;
    try1(1);
    cout<<dem<<endl;
    }
}
