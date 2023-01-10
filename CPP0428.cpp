#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n], b[m], c[n + m];
		for (int &x : a) cin >> x;
		for (int &x : b) cin >> x;
		sort(a, a + n);
		sort(b, b + m);
		int i = 0, j = 0, k = 0;
		while (i < n && j < m) {
			if (a[i] > b[j]) {
				c[k++] = b[j++];
			} else c[k++] = a[i++];
		}
		while (i < n) c[k++] = a[i++];
		while (j < m) c[k++] = b[j++];
		for (int x : c) cout << x << ' ';
		cout << endl;
	}
	return 0;
}
