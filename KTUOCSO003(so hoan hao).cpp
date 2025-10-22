//tat ca so hoan hao chan deu co dang n=2^(p-1) *(2^p-1)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll prime (ll a){
	for(ll i =2; i <=sqrt(a);i++)
	if(a%i==0)
	return 0;
	return a>1;
}	
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>> n;
		bool check = false;
		for(int i =1;i<=63;i++){
			ll p = (1ll<<i) -1;
			if(prime(p)){
				__int128_t a = (__int128_t(1)<<(i-1)) *p;
				if(a>n) break;
				if(a==n){
					check = true;
					break;
				}
			}
		}
		cout << (check ? 1 : 0) <<endl;
	}
}
