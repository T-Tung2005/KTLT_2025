#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, p;
		cin >> n >> p;
			int x = 0;
			while(n>0){
				n/=p;
				x+=n;
			}
			cout << x << endl;
	}
	return 0;
}
