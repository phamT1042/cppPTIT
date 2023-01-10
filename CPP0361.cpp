#include <bits/stdc++.h>
using namespace std;
bool cmp (string a, string b) {
	if (a.length() != b.length()) return a.length() > b.length();
	return a > b; 
}
int main() {
	int n; cin >> n;
	string s[n];
	for (int i = 0; i < n; i++) cin >> s[i];
	int res = 0;
	sort(s, s + n, cmp);
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (s[i] == s[j]) res += 2;
			else if (s[i].find(s[j]) != string::npos) res++;
		}
	}
	cout << res;
	return 0;
}

