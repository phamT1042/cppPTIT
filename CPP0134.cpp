#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int count = 0, flag = 0;
		for (int i = 2; i <= n; i++) {
			while (n % i == 0) {
				n /= i;
				count++;
				if (count == k) {
					flag = 1;
					cout << i;
					break;
				}
			}
			if (flag) break;
		}
		if (!flag) cout << "-1";
		cout << endl;
	}
	return 0;
}
