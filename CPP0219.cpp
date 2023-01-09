#include <bits/stdc++.h>
using namespace std;
int hang[101], cot[101];
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for (int i = 0; i < 101; i++) {
			hang[i] = cot[i] = 0;
		} 
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
				if (a[i][j] == 1) {
					hang[i] = 1;
					cot[j] = 1;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (hang[i] || cot[j]) cout << "1 ";
				else cout << a[i][j] << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}