#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, x;
		int l = 0, r, res = 1e8;
		cin >> n >> x;
		int a[n];
		for (int &y : a) cin >> y;
		long long sum = 0;
		for (r = 0; r < n; r++) {
			sum += a[r];
			while (sum > x) {
				res = min(res, r - l + 1);
				sum -= a[l++];
			}
		}
		if (res < 1e8)
			cout << res << endl;
		else cout << "-1\n";
	}
	return 0;
}