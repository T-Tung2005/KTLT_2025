#include<iostream>
#include<stack>
#include<sstream>
using namespace std;
void stackcycle(stack<int> &st){
    if(st.empty()) return;
    int x = st.top();
    st.pop();
    stackcycle(st);
    cout << x << " ";
    st.push(x);
}
int main(){
    stack<int> st;
    string line;
    while(getline(cin, line)){
        stringstream ss(line);
        string s;
        ss >> s;
        if(s == "push"){
            int x; ss >> x;
            st.push(x);
        }
        else if(s == "pop"){
            int x; ss >> x;
            if(!st.empty()) st.pop();
        }
        else if(s == "show"){
            if(st.empty())
            cout << "empty\n";
            else {
                stackcycle(st);
                cout << endl;
            }
        }
    }
}