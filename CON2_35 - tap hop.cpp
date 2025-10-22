#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k,s;
int x[100];
int a[100];
int dem=0;
void try1(int ans,int index,int sum)
{
    for(int j=index;j<=n;j++)
    {
        sum+=j;
        if(sum==s&&ans==k)
        {
            dem++;
        }else if(sum+j<=s)
        {
            try1(ans+1,j+1,sum);
        }
        sum-=j;
    }
}
int main() {
    while (cin >> n >> k >> s) {
        if (n == 0 && k == 0 && s == 0) break; // di?u ki?n d?ng
        dem = 0; // reset bi?n d?m cho m?i test
        try1(1, 1, 0); // g?i t? tr?ng thái ban d?u
        cout << dem << "\n";
    }
    return 0;
}
