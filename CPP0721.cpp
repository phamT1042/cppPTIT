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
		int b[n];
		for (int i = 0; i < n; i++) b[i] = 1;
		for (int i = 1; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (a[i] > a[j]) b[i] = max(b[j] + 1, b[i]);
			}
		}
		cout << *max_element(b, b + n) << endl;
	}
	return 0;
}