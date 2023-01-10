#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		map<int, int> dayX;
		map<int, int> dayY;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			dayX[x]++;
		}
		for (int i = 0; i < m; i++) {
			int x; cin >> x;
			dayY[x]++;
		}
		long long res = 0;
		for (auto a : dayX) {
			if (a.first == 0) continue;
			res += dayY[0] * a.second;
			if (a.first > 1) {
				res += dayY[1] * a.second;
				if (a.first == 2) {
					for (auto it : dayY) {
						if (it.first > 4) res += it.second * a.second;
					}
				} else if (a.first == 3) {
					res += dayY[2] * a.second;
					for (auto it : dayY) {
						if (it.first > 3) res += it.second * a.second;
					}
				} else if (a.first > 3) {
					for (auto it : dayY) {
						if (it.first > a.first) res += it.second * a.second;
					}
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}

