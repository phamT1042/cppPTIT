#include <bits/stdc++.h>
using namespace std;
main() {
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		int step = 0, l = 0, r = n - 1;
		while (l < r) {
			if (a[l] == a[r]) {
				l++; r--;
			} else {
				if (a[l] < a[r]) {
					a[++l] += a[l - 1];
					step++;
				} else {
					a[--r] += a[r + 1];
					step++;
				}
			}
		}
		cout << step << endl;
	}
}