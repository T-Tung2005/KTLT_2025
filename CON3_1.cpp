#include <bits/stdc++.h>
using namespace std;
int tien[]={1000,500,200,100,50,20,10,5,2,1};
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
   int n;
   cin>>n;
   int dem=0;
   int vitri=0;
   while(n)
   {
       dem+=n/tien[vitri];
       n=n%tien[vitri];
       vitri++;
   }
   cout<<dem<<endl;
    }
}
