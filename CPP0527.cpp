#include <bits/stdc++.h>
using namespace std;
struct Time{
	int h, m, s;
	int all;
	bool operator < (const Time other) {
		return all < other.all;
	}
};
int main() {
	int n;
	cin >> n;
	Time ds[n];
	for (int i = 0; i < n; i++) {
		cin >> ds[i].h >> ds[i].m >> ds[i].s;
		ds[i].all = 3600 * ds[i].h + 60 * ds[i].m + ds[i].s;
	}
	sort(ds, ds + n);
	for (int i = 0; i < n; i++) {
		cout << ds[i].h << ' ' << ds[i].m << ' ' << ds[i].s << endl;
	}
	return 0;
}
