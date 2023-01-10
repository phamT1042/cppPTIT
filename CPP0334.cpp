#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		long long res = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] >= '0' && s[i] <= '9') {
				string tmp = "";
				while (s[i] >= '0' && s[i] <= '9') {
					tmp += s[i++];
				}
				res += stoll(tmp);
				i--;
			}
		}
		cout << res << endl;
	}
}
