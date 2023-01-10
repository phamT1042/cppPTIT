#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a1[n], a2[n];
		for (int &x : a1) cin >> x;
		for (int &x : a2) cin >> x;
		int sum1[n], sum2[n];
		sum1[0] = a1[0];
		sum2[0] = a2[0];
		for (int i = 0; i < n; i++) {
			sum1[i] = sum1[i - 1] + a1[i];
			sum2[i] = sum2[i - 1] + a2[i];
		}
		int length = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				if (sum1[j] - sum1[i] + a1[i] == sum2[j] - sum2[i] + a2[i]) length = max(length, j - i + 1);
			}
		}
		cout << length << endl;

	}
	return 0;
}
