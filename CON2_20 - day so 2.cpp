#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<vector<int>>v;
        v.push_back(a);
        for(int i=1;i<n;i++)
        {
            vector<int>mau=v.back();
            vector<int>tamgiac;
            for(int j=0;j<mau.size()-1;j++)
            {
                tamgiac.push_back(mau[j]+mau[j+1]);
            }
            v.push_back(tamgiac);
        }
       for(int i=v.size()-1;i>=0;i--)
       {
           cout<<"[";
           for(int j=0;j<v[i].size();j++)
           {
               cout<<v[i][j];
               if(j!=v[i].size()-1)
               {
                   cout<<" ";
               }else
                 cout<<"]"<<" ";
           }
       }
       cout<<endl;
    }
}
