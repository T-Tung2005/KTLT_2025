#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int get_min(int a){
	string s = to_string(a);
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '5')
		s[i] ='3';
	}
	return stoi(s);
}
int get_max(int a){
	string s = to_string(a);
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '3')
		s[i] ='5';
	}
	return stoi(s);
}
int main(){
	int t;
	cin>>t;
	while(t--){
	int a,b;
	cin >> a >> b;
	int min_a = get_min(a);
	int min_b = get_min(b);
	int sum_min = min_a + min_b;
	int max_a = get_max(a);
	int max_b = get_max(b);
	int sum_max = max_a + max_b;
	cout << sum_min << " " << sum_max << endl;
	}	
	return 0;
}
