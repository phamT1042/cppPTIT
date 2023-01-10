#include<bits/stdc++.h>
using namespace std;

int main() {
	int t ;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		sort(a, a + n);
		int l = 0, r = n - 1;
		while (l < r) {
			cout << a[r--] << ' ' << a[l++] << ' ';
		}
		if (n % 2 != 0) cout << a[l];
		cout << endl;
	}
	return 0 ;
}
