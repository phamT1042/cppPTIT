#include<bits/stdc++.h>
using namespace std;
int Solve (string s, int k) {
	int n, dem = 0;
	for (int i = 0; i < s.length(); i++) {
		n = 0;
		for (int j = i; j < s.length(); j++) {
			n = n * 10 + s[j] - '0';
			n %= k;
			if (n == 0) dem++;
		}
	}
	return dem;
}
int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		cout << Solve(s, 8) - Solve(s, 24) << endl;
	}
	return 0;
}
