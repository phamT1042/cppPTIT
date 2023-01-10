#include <bits/stdc++.h>
using namespace std;
int main() {
	int a[1001], mod = 1e9 + 7;
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i < 1001; i++) {
		a[i] = a[i - 1] + a[i - 2];
		a[i] = a[i] % mod;
	}
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << a[n] << endl;
	}
	return 0;
}

