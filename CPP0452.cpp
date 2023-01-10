#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, m, k; cin >> n >> m >> k;
		long long a[n], b[m], c[k];
		for (long long &x : a) cin >> x;
		for (long long &x : b) cin >> x;
		for (long long &x : c) cin >> x;
		int i = 0, j = 0;
		vector<long long> giao1;
		while (i < n && j < m) {
			if (a[i] > b[j]) j++;
			else if (a[i] < b[j]) i++;
			else {
				giao1.push_back(a[i]);
				i++;
				j++;
			}
		}
		i = j = 0;
		vector<long long> res;
		while (i < k && j < giao1.size()) {
			if (c[i] > giao1[j]) j++;
			else if (c[i] < giao1[j]) i++;
			else {
				res.push_back(c[i]);
				i++;
				j++;
			}
		}
		if (res.size() == 0) cout << "-1\n";
		else {
			for (long long x : res) cout << x << ' ';
			cout << endl;
		}
	}
	return 0;
}
