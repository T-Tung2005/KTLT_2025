#include<iostream>
using namespace std;
// Một số đối xứng k chữ số chỉ cần xác định nửa số rồi phản chiếu.
// Nếu k lẻ: cần chọn (k+1)/2 chữ số.
// Nếu k chẵn: cần chọn k/2 chữ số.
// Số lượng palindrome k chữ số
// Count(k)=9×10⌊(k−1)/2⌋
int main(){
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        int cnt = 9;
        for(int i = 0; i < ((k-1)/2); i++)
        cnt*=10;
        cout << cnt << endl;
    }
}