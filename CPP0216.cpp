#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		int l, r; cin >> l >> r;
		int check1 = l, check2 = r;
		while (a[l + 1] >= a[l] && l < check2) l++;
		while (a[r - 1] > a[r] && r > check1) r--;
		if (l == r) cout << "Yes\n";
		else cout << "No\n"; 
	}
	return 0;
}
