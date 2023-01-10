#include <bits/stdc++.h>
using namespace std;
//Form minimum number from given sequence
void PrintMinNumberForPattern(string s) {
    string result;
    stack<int> stk;
    for (int i = 0; i <= s.length(); i++) {
        stk.push(i + 1);
        if (i == s.length() || s[i] == 'I') {
            while (!stk.empty()) {
                result += to_string(stk.top());
                stk.pop();
            }
        }
    }
    cout << result << endl;
}
int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        PrintMinNumberForPattern(s);
    }
    return 0;
}