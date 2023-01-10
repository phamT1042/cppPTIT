#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int x[n][m], h[3][3], y[n][m] = {0};
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++) cin >> x[i][j];
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++) cin >> h[i][j];
		long long sum = 0;
		for (int i = 0; i <= n - 3; i++) {
			for (int j = 0; j <= m - 3; j++) {
				for (int l = 0; l < 3; l++) {
					for (int k = 0; k < 3; k++) {
						sum += h[l][k] * x[i + l][j + k];
					}
				}

			}
		}
		cout << sum << endl;
	}
	return 0;
}