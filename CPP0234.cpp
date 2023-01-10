#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		int a[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) cin >> a[i][j];
		}
		int hd = 0, hc = n - 1, cd = 0, cc = m - 1;
		vector<int> res;
		while (hd <= hc && cd <= cc) {
			for (int j = cd; j <= cc; j++) res.push_back(a[hd][j]);
			hd++;
			for (int i = hd; i <= hc; i++) res.push_back(a[i][cc]);
			cc--;
			if (hd <= hc) {
				for (int j = cc; j >= cd; j--) res.push_back(a[hc][j]);
				hc--;
			}
			if (cd <= cc) {
				for (int i = hc; i >= hd; i--) res.push_back(a[i][cd]);
				cd++;
			}
		}
		cout << res[k - 1] << endl;
	}
	return 0;
}
