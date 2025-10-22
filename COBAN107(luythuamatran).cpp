#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using matrix = vector<vector<ll>>;
const ll mod = 1e9 +7;
//nhan ma tran
matrix multiply (const matrix &a, const matrix &b, int n){
	matrix c (n,vector<ll>(n,0));
	for(int i = 0; i < n; i++){
		for(int j = 0; j<n ;j++){
			for(int k =0; k<n;k++){
				c[i][j] = (c[i][j] + a[i][k]*b[k][j]) % mod;
			}
		}
	}
	return c;
}
// tinh luy thua matran
matrix power(matrix a, ll k, ll n){
	matrix res(n,vector<ll>(n,0));
		for(int i = 0; i< n;i++)	res[i][i] = 1;
	while(k>0){
		if(k%2 == 1) res = multiply(res,a,n);
		a=multiply(a,a,n);
		k >>= 1;
	}
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		matrix a (n,vector<ll>(n));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> a[i][j];
			}
		}
		matrix x=power(a,k,n);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << x[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
