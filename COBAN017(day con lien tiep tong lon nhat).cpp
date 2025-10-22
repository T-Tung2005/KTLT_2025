#include<iostream>
#include<vector>
using namespace std;
using ll = long long;
// 1 mảng max_end_here để tính liên tục 
// mảng result lưu kết quả cuối cùng
ll Kadane_al(vector<ll> &v, ll n){
    ll max_end_here = v[0];
    ll result = v[0];
    for(int i = 1; i < n; i++){
        max_end_here = max(v[i], max_end_here + v[i]);
        result = max(result, max_end_here);
    }
    return result;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(int i = 0; i < n; i++)
        cin >> v[i];
        cout << Kadane_al(v,n) << endl;
    }
}