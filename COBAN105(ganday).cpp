#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		multiset<ll> s;
		for(int i =0; i < n; i++){
			int x; cin>> x;
			s.insert(x);
		}
		ll sum = 0;
		while(s.size() > 1){
			auto it1 = s.begin();
			ll a = *it1;
			s.erase(it1);
			auto it2 = s.begin();
			ll b = *it2;
			s.erase(it2);
			ll merged = (a+b) % mod;
			sum = (sum + merged) % mod;
			s.insert(merged);
		}
		cout << sum % mod << endl;
	}
}

