#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k, b;
	cin >> n >> k >> b;
	int a[n + 1];
	for (int i = 1; i <= n; i++) a[i] = 1;
	for (int i = 0; i < b; i++) {
		int x;
		cin >> x;
		a[x] = 0;
	}
	int countDen = 0;
	for (int i = 1; i <= k; i++) {
		if (a[i] == 1) countDen++;
	}
	int maxDen = countDen;
	for (int i = 2; i <= n - k + 1; i++) {
		if (a[i - 1] == 1) countDen--;
		if (a[i + k - 1] == 1) countDen++;
		maxDen = max(maxDen, countDen);
	}
	cout << k - maxDen;
	return 0;
}
