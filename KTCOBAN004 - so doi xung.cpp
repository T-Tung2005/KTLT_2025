#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int q;
    cin >> q;
    while (q--) {
        int k;
        cin >> k;
        // công th?c: 9 * 10^((k-1)/2)
        long long ans=9*(ll)pow(10,(k - 1)/2);
        cout << ans << "\n";
    }
    return 0;

