#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> xep;
	for (int i = 0; i < n * n; i++) {
		int x;
		cin >> x;
		xep.push_back(x);
	}
	sort(xep.begin(), xep.end());
	int k = 0;
	int hangDau = 0, hangCuoi = n - 1, cotDau = 0, cotCuoi = n - 1;
	int a[n][n];
	while (hangDau <= hangCuoi && cotDau <= cotCuoi) {
		for (int j = cotDau; j <= cotCuoi; j++) {
			a[hangDau][j] = xep[k++];
		}
		hangDau++;
		for (int i = hangDau; i <= hangCuoi; i++) {
			a[i][cotCuoi] = xep[k++];
		}
		cotCuoi--;
		for (int j = cotCuoi; j >= cotDau; j--) {
			a[hangCuoi][j] = xep[k++];
		}
		hangCuoi--;
		for (int i = hangCuoi; i >= hangDau; i--) {
			a[i][cotDau] = xep[k++];
		}
		cotDau++;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) cout << a[i][j] << ' ';
		cout << endl;
	}
	return 0;
}
