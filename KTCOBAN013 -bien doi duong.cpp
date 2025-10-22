#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin>>q;
    while(q--)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int dem=0;
    int pos=0;
    bool check = false;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0) check=true;
        else if(a[i]<0) dem++;
        else pos++;
    }
    if(check){
        cout<<-1<<endl;
    }else
     cout<<min(dem,pos)<<endl;
 }
}
