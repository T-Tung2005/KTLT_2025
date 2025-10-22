#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, m;
        cin >> x >> y >> m;
        int cnt = m /x;
        int check = cnt;
        while(check >= y){
            int extra = check / y;
            cnt += extra;
            check = check % y + extra; 
        }
        cout << cnt << endl;
    }
}