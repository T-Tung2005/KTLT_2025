#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string add(string a, string b){
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    if(a.size() < b.size()) swap(a,b);
    string res = "";
    int carry = 0;
    for(int i = 0; i < (int)a.size(); i++){
        int A = a[i] - '0';
        int B = (i < (int)b.size() ? b[i] - '0' : 0);
        int sum = A + B + carry;
        res.push_back((sum % 10) + '0');
        carry = sum /10;
    }
    if(carry) res.push_back(carry + '0');
    reverse(res.begin(), res.end());
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        cout << add(a, b) << endl;
    }
}