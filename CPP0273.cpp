#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n], sum[n];
		for (int &x : a) cin >> x;
		sum[0] = a[0];
		for (int i = 1; i < n; i++) sum[i] = sum[i - 1] + a[i];
		int flag = 0;
		for (int i = 1; i < n - 1; i++) {
			if (sum[i - 1] == sum[n - 1] - sum[i]) {
				flag = i + 1;
				break;
			}
		}
		if (flag == 0) cout << "-1\n";
		else cout << flag << endl;
	}
	return 0;
}
