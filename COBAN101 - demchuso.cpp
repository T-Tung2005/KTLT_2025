#include <iostream>
#include <string>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int a, b; cin >> a >> b;
        string s;
        if(a > b){
            int tmp = a;
            a = b;
            b = tmp;
        }
        for(int i = a; i <= b; i++){
            s += to_string(i);
        }

        long long freq[10] = {0};
        for(char c : s){
            if (c >= '0' && c <= '9') {
                freq[c - '0']++;
            }
        }
        for(long long x : freq) cout << x << ' ';
        cout << endl;
    }
}
