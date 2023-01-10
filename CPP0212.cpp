#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9 + 7;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		int a[n];
		for (int &x : a) {
			cin >> x;
		}
		long long sum = 0;
		long long lt = 1;
		for (int i = n - 1; i >= 0; i--) {
			sum += a[i] * lt;
			sum %= MOD;
			lt *= x;
			lt %= MOD;
		}
		cout << sum << endl;
	}
	return 0;
}
