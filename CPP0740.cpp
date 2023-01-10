#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long a[n];
		for (long long &x : a) cin >> x;
		long long tich, maxTich = -1e18;
		for (int i = 0; i < n; i++) {
			tich = a[i];
			maxTich = max(maxTich, tich);
			for (int j = i + 1; j < n; j++) {
				tich *= a[j];
				maxTich = max(maxTich, tich);
			}
		}
		cout << maxTich << endl;
	}
	return 0;
}