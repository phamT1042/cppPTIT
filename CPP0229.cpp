#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		vector<vector<int>> cheoPhu;
		int n, m; cin >> n >> m;
		int a[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) 
				cin >> a[i][j];
		}
		for (int j = 0; j < m; j++) {
			vector<int> x;
			for (int i = 0; i < n; i++) {
				if (j - i < 0) break;
				x.push_back(a[i][j - i]);
			}
			cheoPhu.push_back(x);
		}
		for (int i = 1; i < n; i++) {
			vector<int> x;
			for (int j = m - 1; j >= 0; j--) {
				if (m + i - 1 - j >= n) break;
				x.push_back(a[m + i - 1 - j][j]);
			}
			cheoPhu.push_back(x);
		}
		for (int i = 0; i < cheoPhu.size(); i++) {
			if (i % 2 == 0) {
				for (int j = cheoPhu[i].size() - 1; j >= 0; j--) 
                    cout << cheoPhu[i][j] << ' ';
			}
			else for (int x : cheoPhu[i]) cout << x << ' ';
		}
		cout << endl;
	}
	return 0;
}
