#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int &x : a) {
			cin >> x;
		}
		sort(a, a + n);
		vector<int> v1(a, a + n / 2);
		vector<int> v2(a + n/2, a + n);
		int l = 0, r = v2.size() - 1;
		while (l <= r) {
			swap(v2[l++], v2[r--]);
		}
		int i = 0, j = 0;
		while (i < min(v1.size(), v2.size()) && j < min(v1.size(), v2.size())) {
			cout << v2[j++] << ' ';
			cout << v1[i++] << ' ';
		}
		if (i < v1.size()) cout << v1[v1.size() - 1];
		if (i < v2.size()) cout << v2[v2.size() - 1];
		cout << endl;
	}
	return 0;
}
