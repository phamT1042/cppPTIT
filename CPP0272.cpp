#include <bits/stdc++.h>
using namespace std;
long long MOD = 1e9 + 7;
long long gcd (long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
long long luyThua(long long a, long long b) {
	if (b == 1) return a;
	if (b % 2 != 0)
        return luyThua(a, b - 1) * a % MOD;
    return luyThua(a, b / 2) * luyThua(a, b / 2) % MOD;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long a[n];
		long long h = 1, g = 1;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (i == 0)
				g = a[0];
			else
				g = gcd(g, a[i]);
			h *= a[i];
			h %= MOD;
		}
		cout << luyThua(h, g) << endl;
}
return 0;
}

