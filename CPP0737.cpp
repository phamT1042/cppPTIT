#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int &x : a) cin >> x;
		int sum = 0;
		for (int i = 0; i < k; i++) {
			sum += a[i];
		}
		int dau = 0, cuoi = k - 1, maxSum = sum;
		for (int i = k; i < n; i++) {
			sum -= a[i - k];
			sum += a[i];
			if (sum > maxSum) {
				maxSum = sum;
				dau = i - k + 1;
				cuoi = i;
			}
		}
		for (int j = dau; j <= cuoi; j++) {
			cout << a[j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
