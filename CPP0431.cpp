#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int &x : a) cin >> x;
		sort(a, a + n);
		long long res = 0;
		for (int i = 0; i < n - 1; i++) {
			auto end = lower_bound(a + i, a + n, a[i] + k);
			res += end - a;
			res -= i + 1;
		}
		cout << res << endl;
	}
	return 0;
}

