#include <bits/stdc++.h>
using namespace std;

string toExcelColumn(long long n) {
    string res = "";
    while (n > 0) {
        n--; // chuy?n sang h? 0-based
        int r = n % 26;
        res += char('A' + r);
        n /= 26;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    ifstream in("input.txt");
    ofstream out("output.txt");

    long long n;
    while (in >> n) {           // d?c t?ng dòng trong file
        out << toExcelColumn(n) << "\n";  // ghi ra file output
    }

    in.close();
    out.close();
    return 0;
}

