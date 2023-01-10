#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		int a[n];
		for (int &y : a) cin >> y;
		sort(a, a + n);
		int l = 0, r = n - 1, mid;
		int flag = -1;
		while (l <= r) {
			mid = (l + r) / 2;
			if (a[mid] == x) {
				flag = mid + 1;
				break;
			} else if (a[mid] > x) {
				r = mid - 1;
			} else l = mid + 1;
		}
		if (flag == -1) cout << flag << endl;
		else cout << "1\n";
	}
	return 0;
}
