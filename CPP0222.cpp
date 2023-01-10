#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		map<int, int> check;
		for (int j = 0; j < n; j++) {
			check[a[0][j]] = 1;
		}
		for (int i = 1; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (check[a[i][j]] == i) check[a[i][j]] = i + 1;
			}
		}
		int count = 0;
		for (pair<int, int> x : check) {
			if (x.second == n) count++;
		}
		cout << count << endl;
	}
	return 0;
}
