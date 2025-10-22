#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
long long digit_product(long long n){
    if(n == 0) return 0;
    long long res = 1;
    while(n > 0){
        res *= n % 10;
        n /= 10;
    }
    return res;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        long long num = stoll(s);
        long long res = digit_product(num);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0') continue;
            string tmp = s;
            tmp[i]--;
            for(int j = i + 1; j < s.size(); j++) tmp[j] = '9';
            long long value = stoll(tmp);
            if(value < num){
                res = max(res, digit_product(value));
            }
        }
        cout << res << endl;
    }
}
