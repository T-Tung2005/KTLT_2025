#include <iostream>
using namespace std;
string kt(int sum,int n)
{
    string res=string(n,'0');
    for(int i=n-1;i>=0;i--)
    {
        if(sum>9)
        {
            res[i]='9';
            sum-=9;
        }else
        {
            if(i!=0){
                res[0]='1';
                res[i]+=(sum-1);
                return res;
            }else {
                res[i]+=sum;
                return res;
            }
        }
    }
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
    int sum,n;
    cin>>sum>>n;
    if(n*9<sum||sum==0&&n>1)
    {
        cout<<-1<<endl;
    }else cout<<kt(sum,n)<<endl;
   // return 0;
    }
}
