#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int i = s.length() - 2;
		while (i >= 0 && s[i] <= s[i + 1]) i--;
		if (i == -1) cout << "-1\n";
		else {
			for (int j = s.length() - 1; j > i; j--) {
				if (s[j] < s[i]) {
					while (s[j - 1] == s[j]) j--;
					swap(s[i], s[j]);
					break;
				}
			}
			if (s[0] != '0') cout << s << endl;
			else cout << "-1\n";
		}
	}
}
