#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		multiset<char> chu;
		long long so = 0;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] >= '0' && s[i] <= '9') so += s[i] - '0';
			else {
				chu.insert(s[i]);
			}
		}
		for (char x : chu) cout << x;
		cout << so << endl;
	}
}
