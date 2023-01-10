#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) cin >> a[i][j];
		}
		int hangDau = 0, hangCuoi = n - 1, cotDau = 0, cotCuoi = m - 1;
		while (hangDau <= hangCuoi && cotDau <= cotCuoi) {
			for (int j = cotDau; j <= cotCuoi; j++) {
				cout << a[hangDau][j] << ' ';
			}
			hangDau++;
			for (int i = hangDau; i <= hangCuoi; i++) {
				cout << a[i][cotCuoi] << ' ';
			}
			cotCuoi--;
			if (hangDau <= hangCuoi) {
				for (int j = cotCuoi; j >= cotDau; j--) {
					cout << a[hangCuoi][j] << ' ';
				}
				hangCuoi--;
			}
			if (cotDau <= cotCuoi) {
				for (int i = hangCuoi; i >= hangDau; i--) {
					cout << a[i][cotDau] << ' ';
				}
				cotDau++;
			}
		}
		cout << endl;
	}
	return 0;
}
