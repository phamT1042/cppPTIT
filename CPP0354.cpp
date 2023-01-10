#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s; cin >> s;
		int a[26] = {0};
		for (int i = 0; i < s.length(); i++) {
			a[s[i] - 'A']++;
		}
		for (int i = 0; i < s.length(); i++) {
			cout << s[i] << a[s[i] - 'A'];
			i += a[s[i] - 'A'] - 1;
		}
		cout << endl;
	}
	return 0;
}
