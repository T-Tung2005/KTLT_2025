#include<iostream>
using namespace std;
using ll = long long;
ll n;
const ll mod = 123456789;
ll check(ll a, ll b){
    ll res = 1;
    while(b){
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b  >>= 1;
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        if(n == 0){
            cout << 0 << endl;
            continue;
        }
        cout << check(2,n - 1) << endl;
    }
    return 0;
}