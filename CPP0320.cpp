#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int check = 1;
		set<char> check09;
		if (s[0] == '0') check = 0;
		else {
			for (int i = 0; i < s.length(); i++) {
				if (s[i] >= '0' && s[i] <= '9') check09.insert(s[i]);
				else {
					check = 0;
					break;
				}
			}
		}
		if (check == 0) cout << "INVALID\n";
		else {
			if (check09.size() == 10) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	return 0;
}
