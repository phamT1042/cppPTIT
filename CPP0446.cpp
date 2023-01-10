#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		int minSum = INT_MAX;
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				if (abs(a[i] + a[j]) < abs(minSum)) minSum = a[i] + a[j];
			}
		}
		cout << minSum << endl;
	}
	return 0;
}