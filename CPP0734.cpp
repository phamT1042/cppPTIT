#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int a[n][m], cot[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
				cot[i][j] = a[i][j];
			}
		}
		for (int i = 1; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j]) cot[i][j] = cot[i - 1][j] + 1;
			}
		}
		int Smax = INT_MIN;
		for (int i = 0; i < n; i++) {
			for (int j = 1; j < m - 1; j++) {
				if (cot[i][j] != 0) {
					int l = j, r = j;
					while (cot[i][l - 1] >= cot[i][j] && l > 0) l--;
					while (cot[i][r + 1] >= cot[i][j] && r < m - 1) r++;
					int S = (r - l + 1) * cot[i][j];
					Smax = max(Smax, S);
				}
			}
		}
		for (int i = 0; i < n; i++) {
			int j = 0, r = 0;
			if (cot[i][j] != 0) {
				while (cot[i][r + 1] >= cot[i][j] && r < m - 1) r++;
				int S = (r + 1) * cot[i][j];
				Smax = max(Smax, S);
			}
		}
		for (int i = 0; i < n; i++) {
			int l = m - 1, j = m - 1;
			if (cot[i][j] != 0) {
				while (cot[i][l - 1] >= cot[i][j] && l > 0) l--;
				int S = (j - l + 1) * cot[i][j];
				Smax = max(Smax, S);
			}
		}
		cout << Smax << endl;
	}
	return 0;
}

