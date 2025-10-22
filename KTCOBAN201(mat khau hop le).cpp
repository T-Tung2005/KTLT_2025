#include<bits/stdc++.h>
using namespace std;
string check(string s){
	string res1 ="INVALID";
	string res2 ="VALID";
	int l = s.size();
	vector<bool> check(5,0);
		check[4] = 1;
	if(l < 8) return res1;
	else {
		for(int i = 0 ;i < s.size();i++){
			if(s[i] > 64 && s[i] < 91)
			check[0] = 1;
			if(s[i] > 96 && s[i] <123)
			check[1] = 1;
			if(s[i] > 47 && s[i] < 58)
			check[2] = 1;
			if(s[i] == '!' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '^' || s[i] == '&' 
			|| s[i] == '*' || s[i] == '(' || s[i] == ')' || s[i] == '-' || s[i] == '+' || s[i] == '@')
			check[3] = 1;
			if(i != s.size() - 1){
			if(s[i] == s[i +1])
			check[4] = 0;
			if(s[i] == s[i +1] && s[i] ==' ' && s[i +1] == ' ')
			check[4] = 1;
			}	
		}
		int sum =0;
		for(int i =0; i < 5;i++){
		sum += check[i];
	}
		if(sum < 5)
		return res1;
		else return res2;
	}
}
int main(){
	ifstream in("password.in");
	ofstream out("res.out");
	string n;
	while(getline(in,n)){
		out << check(n)<<endl;
	}
	in.close();
	out.close();
	return 0;
}
