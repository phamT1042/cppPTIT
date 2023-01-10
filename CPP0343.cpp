#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--) {
		string s;
		int chan = 0;
		int so = 0;
		char end = ' ';
		while(cin >> s) {
			if (s[s.length() - 1] % 2 == 0) chan++;
			so++;
			end = getchar();
			if (end == '\n') break;
		}
		if (chan > so - chan && so % 2 == 0 || so - chan > chan && so % 2 == 1) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
