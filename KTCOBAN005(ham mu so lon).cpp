// Sử dụng công thức lấy MOD đối với MOD nguyên tố và công thức tính MOD:
// 1) a^b MOD m = (a MOD m)^(b MOD (m-1)) MOD m
// 2) abcde MOD m = (a MOD m)*10 + (bcde MOD m)
#include<iostream>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;
ll mod(ll a, ll b, ll m){
    ll res = 1;
    a %= m;
    while(b>0){
        if(b & 1) // toán tử bit nếu b có bít cuối bằng 1
        res = (res * a) % m;
        a = (a * a) % m;
        b >>=1; // dịch bit sang phải vd 1101 -> 110
    }
    return res;
}
ll modString(const string &a,ll m){
    ll res = 0;
    for(char c : a)
    res = ((res * 10) + (c -'0')) % m;
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        int mod_a = modString(a,MOD);
        int mod_b = modString(b,MOD - 1);
        cout << mod(mod_a, mod_b, MOD) << endl;
    }
}