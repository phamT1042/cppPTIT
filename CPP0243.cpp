#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int a[n], b[m];
		for (int &x : a) cin >> x;
		for (int &x : b) cin >> x;
		int giao[m] = {0};
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (b[i] == a[j]) {
					giao[i] += 1;
					a[j] = -1;
				}
			}
		}
		multiset<int> end;
		for (int i = 0; i < n; i++) {
			if (a[i] != -1) end.insert(a[i]);
		}
		for (int i = 0; i < m; i++) {
			if (giao[i] != 0) {
				for (int j = 0; j < giao[i]; j++) cout << b[i] << ' ';
			}
		}
		for (int x : end) cout << x << ' ';
		cout << endl;
	}
	return 0;
}
