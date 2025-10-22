#include <bits/stdc++.h>
using namespace std;
string so(long long n)
{
    string ans;
    while(n!=0)
    {
        n--;
        ans=ans+(char)((n%26)+'A');
        n/=26;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main()
{
    ifstream fin("input.txt");   // m? file input.txt d? d?c
    ofstream fout("output.txt"); // m? file output.txt d? ghi
    long long n;
    while (fin >> n) {           // d?c t?ng s? trong file
        fout << so(n) << "\n"; // ghi k?t qu? ra file
    }
    fin.close();
    fout.close();
    return 0;
}
