#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long x, y, p;
		cin >> x >> y >> p;
		long long res = 1;
		while (y) {
			if (y % 2 == 1) {
				res *= x;
				res %= p;
			}
			x *= x;
			x %= p;
			y /= 2;
		}
		cout << res << endl;
	}
	return 0;
}
