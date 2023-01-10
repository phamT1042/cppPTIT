#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for (int &x : a) cin >> x;
		for (int &x : b) cin >> x;
		sort(a, a + n);
		sort(b, b + m);
		vector<int> hop(n + m);
		auto it = set_union(a, a + n, b, b + m, hop.begin());
		hop.resize(it - hop.begin());
		for (int x : hop) cout << x << ' ';
		cout << endl;
		vector<int> giao(n + m);
		it = set_intersection(a, a + n, b, b + m, giao.begin());
		giao.resize(it - giao.begin());
		for (int x : giao) cout << x << ' ';
		cout << endl;
	}
	return 0;
}
