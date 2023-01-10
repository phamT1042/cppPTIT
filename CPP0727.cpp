#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n; int a[n];
		for (int &x : a) cin >> x;
		long long sum[n] = {0};
		sum[0] = a[0];
		sum[1] = max(a[1], a[0]);
		for (int i = 2; i < n; i++) {
			sum[i] = max(a[i] + sum[i - 2], sum[i - 1]);
		}
		cout << sum[n - 1] << endl;
	}
	return 0;
}