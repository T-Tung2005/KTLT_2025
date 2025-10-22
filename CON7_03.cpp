#include <bits/stdc++.h>
using namespace std;
string rev(string s)
{
    string tmp="";
    for(int i=s.size()-1;i>=0;i--)
    {
        tmp+=s[i];
    }
    return tmp;
}
int main()
{
    int q;
    cin>>q;
   cin.ignore();
    while(q--)
    {
      string s;
      getline(cin,s);
      stringstream ss(s);
      string tmp1;
      while(ss>>tmp1)
      {
         if(tmp1!=" ")
         {
             cout<<rev(tmp1)<<" ";
         }
      }
      cout<<endl;
    }
}#include <bits/stdc++.h>
using namespace std;
string rev(string s)
{
    string tmp="";
    for(int i=s.size()-1;i>=0;i--)
    {
        tmp+=s[i];
    }
    return tmp;
}
int main()
{
    int q;
    cin>>q;
   cin.ignore();
    while(q--)
    {
      string s;
      getline(cin,s);
      stringstream ss(s);
      string tmp1;
      while(ss>>tmp1)
      {
         if(tmp1!=" ")
         {
             cout<<rev(tmp1)<<" ";
         }
      }
      cout<<endl;
    }
}
