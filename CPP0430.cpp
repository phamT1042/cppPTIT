#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		set<int> a;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			a.insert(x);
		}
		cout << *a.rbegin() - *a.begin() + 1 - a.size() << endl;
	}
	return 0;
}
