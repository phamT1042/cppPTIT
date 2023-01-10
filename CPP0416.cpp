#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int dem[1001];
		memset(dem, 0, sizeof(dem));
		int a[n];
		set<int> sol;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			dem[a[i]]++;
			sol.insert(a[i]);
		}
		int res = 0;
		for (int x : sol) {
			if (k - x > 0) {
				if (x != k - x) {
					res += dem[x] * dem[k - x];
					dem[x] = dem[k - x] = 0;
				} else res += dem[x] * (dem[x] - 1) / 2;
			}
		}
		cout << res << endl;
	}
	return 0;
}
