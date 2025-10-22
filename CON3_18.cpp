#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
   int tong;cin>>tong;
   int dem4=-1;
   int dem7;
   for(dem7=tong/7;dem7>=0;dem7--)
   {
       if((tong-dem7*7)%4==0)
       {
           dem4=(tong-dem7*7)/4;
           break;
       }
   }
   if(dem4!=-1)
   {
       for(int i=0;i<dem4;i++)
       {
           cout<<4;
       }
       for(int i=0;i<dem7;i++)
       {
           cout<<7;
       }
       cout<<endl;
   }else cout<<"-1"<<endl;
    }
}
