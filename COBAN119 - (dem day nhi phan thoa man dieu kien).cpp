#include <bits/stdc++.h>
using namespace std;
bool checkZeros(long long n, long long k)
{
    if(n == 0) return k == 1; // s? 0 có dúng 1 ch? s? 0
    int cnt = 0;
    while(n > 0)
    {
        if(n % 2 == 0) cnt++;
        n /= 2;
    }
    return cnt == k;
}
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        long long n, k;
        cin >> n >> k;
        int dem = 0;
        for(long long i = 0; i <= n; i++)
        {
            if(checkZeros(i, k))
            {
                dem++;
            }
        }
        cout << dem << endl;
    }
}
