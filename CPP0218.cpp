#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		int check1 = 1;
		for (int i = 0; i < n - 1; i++) {
			if (a[i] != a[i + 1]) check1 = 0;
		}
		if (check1) cout << "0\n";
		else {
			int end = *max_element(a, a + n);
			int res = 0;
			for (int k = 1; k <= end; k++) {
				int du = a[0] % k;
				int count = 1;
				for (int i = 1; i < n; i++) {
					if (a[i] % k != du) {
						break;
					} else if (a[i] % k == du) count++;
				}
				if (count == n) res++;
			}
			cout << res << endl;
		}
	}
	return 0;
}