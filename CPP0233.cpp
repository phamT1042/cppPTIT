#include<bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int a[n][m]; 
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) cin >> a[i][j];
		}
		int hd = 0, hc = n - 1, cd = 0, cc = m - 1;
		stack<int> res;
		while (hd <= hc && cd <= cc) {
			for (int j = cd; j <= cc; j++) res.push(a[hd][j]);
			hd++;
			for (int i = hd; i <= hc; i++) res.push(a[i][cc]);
			cc--;
			if (hd <= hc) {
				for (int j = cc; j >= cd; j--) res.push(a[hc][j]);
				hc--;
			}
			if (cd <= cc) {
				for (int i = hc; i >= hd; i--) res.push(a[i][cd]);
				cd++;
			}
		}
		while (!res.empty()) {
			cout << res.top() << ' ';
			res.pop();
		}
		cout << endl;
	}
	return 0;
}
