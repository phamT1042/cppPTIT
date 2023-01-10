#include <bits/stdc++.h>
using namespace std;
//Maximum Sum Rectangle In A 2D Matrix - Kadane's Algorithm Applications (Dynamic Programming)
int Kadane (int a[], int n) {
	int sum = 0, sumMax = INT_MIN;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		sumMax = max(sumMax, sum);
		if (sum < 0) sum = 0;
	}
	return sumMax;
}
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
		int maxSumMatrix = INT_MIN;
		for (int l = 0; l < m; l++) {
			int sum[n] = {0};
			for (int r = l; r < m; r++) {
				for (int i = 0; i < n; i++) sum[i] += a[i][r];
				maxSumMatrix = max(maxSumMatrix, Kadane(sum, n));
			}
		}
		cout << maxSumMatrix << endl;
	}
	return 0;
}