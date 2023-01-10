#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int a[n];
		for (int &x : a) cin >> x;
		multiset<int> check;
		for (int i = 0; i < k; i++) {
			check.insert(a[i]);
		}
		cout << *check.rbegin() << ' ';
		for (int i = k; i < n; i++) {
			check.erase(check.find(a[i - k]));
			check.insert(a[i]);
			cout << *check.rbegin() << ' ';
		}
		cout << endl;
	}
	return 0;
}