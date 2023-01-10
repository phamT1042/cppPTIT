#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int a[n], b[m];
		for (int &x : a) cin >> x;
		for (int &x : b) cin >> x;
		int i = 0, j = 0;
		set<int> hop;
		set<int> giao;
		while (i < n && j < m) {
			if (a[i] < b[j]) {
				hop.insert(a[i++]);
			} else {
				if (a[i] > b[j]) {
					hop.insert(b[j++]);
				} else {
					hop.insert(a[i]);
					giao.insert(a[i++]);
					j++;
				}
			}
		}
		while (i < n) hop.insert(a[i++]);
		while (j < m) hop.insert(b[j++]);
		for (int x : hop) cout << x << ' ';
		cout << endl;
		for (int x : giao) cout << x << ' ';
		cout << endl;
	}
	return 0;
}
