#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n][m], dp[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (i == 0 || j == 0)
					dp[i][j] = a[i][j];
				else {
					if (a[i][j]) {
						dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
					}
					else dp[i][j] = 0;
				}
			}
		}
		int res = INT_MIN;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				res = max(res, dp[i][j]);
			}
		}
		cout << res << endl;
	}
	return 0;
}