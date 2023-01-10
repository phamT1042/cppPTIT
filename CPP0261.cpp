#include <bits/stdc++.h>
using namespace std;
int a[100][100], b[10][10], c[100][100];
int main() {
	int n, m; cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cin >> a[i][j];
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) cin >> b[i][j];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			c[i][j] = b[i % m][j % m] * a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << c[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
