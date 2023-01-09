#include <bits/stdc++.h>
using namespace std;
bool check(string s, int k) {
	if (s.length() < 26) return false;
	set<char> x;
	for (int i = 0; i < s.length(); i++) {
		x.insert(s[i]);
	}
	if (26 - x.size() <= k && s.length() - x.size() >= k) return true;
	return false;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		int k;
		cin >> s >> k;
		if (check(s, k)) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
