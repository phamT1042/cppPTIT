#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		set<int> check;
		for (int &x : a) {
			cin >> x;
			check.insert(x);
		}
		for (int i = 0; i < n; i++) {
			set<int>::iterator search = check.find(a[i]);
			search++;
			if (search != check.end()) cout << *search;
			else cout << "_";
			cout << ' ';
		}
		cout << endl;
	}
	return 0;
}
