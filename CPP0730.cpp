#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long a[n];
		int soAm = 0;
		for (long long &x : a) {
			cin >> x;
			if (x < 0) soAm++;
		}
		if (soAm == n) cout << "-1\n";
		else {
			long long sum = 0, maxSum = -1e6;
			for (int i = 0; i < n; i++) {
				sum += a[i];
				maxSum = max(maxSum, sum);
				if (sum < 0) {
					sum = 0;
				}
			}
			cout << maxSum << endl;
		}
	}
	return 0;
}