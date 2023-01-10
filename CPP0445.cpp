#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		set<int> a;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			a.insert(x);
		}
		if (a.size() == 1) cout << "-1\n";
		else {
			cout << *a.begin() << ' ' << *(++a.begin()) << endl;
		}
	}
	return 0;
}
