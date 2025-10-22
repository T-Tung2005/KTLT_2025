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
        for(auto x :v)
        {
            cout<<"[";
            for(int j=0;j<x.size();j++)
            {
                cout<<x[j];
                if(j!=x.size()-1)
                {
                    cout<<" ";
                }
            }
            cout<<"]";
            cout<<endl;
        }
    }
}
