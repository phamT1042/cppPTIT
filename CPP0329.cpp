#include<bits/stdc++.h>
using namespace std;
string cong (string a, string b) {
    while (a.length() > b.length()) b = "0" + b;
    while (b.length() > a.length()) a = "0" + a;
    string res = ""; int nho = 0;
    for (int i = a.length() - 1; i >= 0; i--) {
        int end = (a[i] - '0') + (b[i] - '0') + nho;
        if (end >= 10) {
            nho = 1;
            end -= 10;
        }
        else nho = 0;
        res = to_string(end) + res;
    }
    if (nho > 0) res = to_string(nho) + res;
    return res;
}
string tru (string a, string b) {
    while (a.length() > b.length()) b = "0" + b;
    while (b.length() > a.length()) a = "0" + a;
    if (b > a) swap(a, b);
    string res = ""; int nho = 0;
    for (int i = a.length() - 1; i >= 0; i--) {
        int end = (a[i] - '0') - (b[i] - '0') - nho;
        if (end < 0) {
            nho = 1;
            end += 10;
        }
        else nho = 0;
        res = to_string(end) + res;
    }
    while (res[0] == '0') res.erase(0, 1);
    if (res.length() < 1) return "0";
    return res;
}
string chia (string a, string b) {
    string number = "", res = "";
    for (int i = 0; i < a.length(); i++) {
        number += a[i];
        res += "0";
        int them = 0;
        while (number.length() > b.length() || (number.length() == b.length()) && (number > b)) {
            them++;
            number = tru(number, b);
            while (number[0] == '0') number.erase(0, 1);
        }
        res = cong(res, to_string(them));
    }
    if (number == b) res = cong(res, "1");
    while (res[0] == '0') res.erase(0, 1);
    return res;
}
int main() {
    int t; cin >> t;
    while (t--) {
        string x, y; cin >> x >> y;
        if (x.length() < y.length() || (x.length() == y.length()) && (x < y)) cout << "0\n";
        else
            cout << chia(x, y) << endl;
    }
    return 0;
}