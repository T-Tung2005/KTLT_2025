#include <bits/stdc++.h>
using namespace std;
int a[1000];int n, k;
bool ok;
void kt() {
    for (int i = 1; i <= k; i++) a[i] = i;
}
void sinh() {
    int i = k;
    while (i >= 1 && a[i] == n - k + i) i--;
    if (i == 0) ok = 0;
    else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) a[j] = a[j - 1] + 1;
    }
}
int main() {
    int q;
    cin >> q;
    while (q--) {
        cin >> n >> k;
        kt();
        ok = 1;
        int dem = 0;
        vector<vector<int>> v;
        while (ok) {
            dem++;
            sinh();
        }
        cout << dem << endl;
        kt();
        ok = 1;
        while (ok) {
            cout << "[";
            for (int i = 1; i <= k; i++) {
                cout << a[i];
                if (i != k) cout << " ";
            }
            cout << "]\n";
            sinh();
        }
    }
}
