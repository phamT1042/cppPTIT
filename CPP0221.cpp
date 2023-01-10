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
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}
		int hangDau = 0, hangCuoi = n - 1, cotDau = 0, cotCuoi = m - 1;
		while (hangDau <= hangCuoi && cotDau <= cotCuoi) {
			for (int j = cotCuoi; j > cotDau; j--) {
				swap(a[hangDau][j], a[hangDau][j - 1]);
			}
			hangDau++;
			for (int i = hangDau; i <= hangCuoi; i++) {
				swap(a[i][cotDau], a[i - 1][cotDau]);
			}
			cotDau++;
			if (hangDau <= hangCuoi) {
				for (int j = cotDau; j <= cotCuoi; j++) {
					swap(a[hangCuoi][j], a[hangCuoi][j - 1]);
				}
				hangCuoi--;
			}
			if (cotDau <= cotCuoi) {
				for (int i = hangCuoi; i >= hangDau; i--) {
					swap(a[i][cotCuoi], a[i + 1][cotCuoi]);
				}
				cotCuoi--;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
