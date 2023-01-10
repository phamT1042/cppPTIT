#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, m, k; cin >> n >> m >> k;
		int a[n + 1][m + 1];
		int prefix[n + 1][m + 1];
		for (int i = 0; i < n + 1; i++) prefix[i][0] = 0;
		for (int j = 0; j < m + 1; j++) prefix[0][j] = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> a[i][j];
				prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + a[i][j];
			}
		}
		for (int i = k; i <= n; i++) {
			for (int j = k; j <= m; j++) {
				cout << (prefix[i][j] - prefix[i - k][j] - prefix[i][j - k] + prefix[i - k][j - k]) / (k * k) << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

