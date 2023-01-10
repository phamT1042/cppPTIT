#include<bits/stdc++.h>
using namespace std;
string cong (string a, string b) {
	if (a.length() < b.length()) swap(a, b);
	int length1 = a.length(), length2 = b.length();
	for (int i = 0; i < length1 - length2; i++) b = '0' + b;
	string res = "";
	int nho = 0, end = 0;
	for (int i = length1 - 1; i >= 0; i--) {
		end = (b[i] - '0') + (a[i] - '0') + nho;
		res = to_string(end % 10) + res;
		nho = end / 10;
	}
	if (nho > 0) res = to_string(nho) + res;
	return res;
}
bool kt (string s, int l, int length1, int length2) {
	string s1 = s.substr(l, length1);
	string s2 = s.substr(l + length1, length2);
	string s3 = cong(s1, s2);
	if (s3.length() > (s.length() - length1 - length2 - l)) return false;
	if (s3 == s.substr(l + length1 + length2, s3.length())) {
		if (s.length() == l + length1 + length2 + s3.length()) return true;
		return kt (s, l + length1, length2, s3.length());
	}
	return false;
}
void solve (string s) {
	for (int i = 1; i < s.length(); i++) {
		for (int j = 1; j <= s.length() - i; j++) {
			if (kt(s, 0, i, j)) {cout << "Yes\n"; return;}
		}
	}
	cout << "No\n";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		solve(s);
	}
}

