#include <bits/stdc++.h>
using namespace std;
bool check1(string s) {
	return s[0] < s[1] && s[1] < s[2] && s[2] < s[3] && s[3] < s[4];
}
bool check2(string s) {
	return s[0] == s[1] && s[1] == s[2] && s[2] == s[3] && s[3] == s[4];
}
bool check3(string s) {
	return s[0] == s[1] && s[1] == s[2] && s[3] == s[4];
}
bool check4(string s) {
	for (int i = 0; i < 5; i++) {
		if (s[i] != '6' && s[i] != '8') return false;
	}
	return true;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		s.erase(8, 1);
		s.erase(0, 5);
		if (check1(s) || check2(s) || check3(s) || check4(s)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
