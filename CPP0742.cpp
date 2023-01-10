#include <bits/stdc++.h>
using namespace std;
//Minimum swap required to Sort an Array
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		vector<pair<int, int>> viTri;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			viTri.push_back({a[i], i});
		}
		sort(viTri.begin(), viTri.end());
		int res = 0;
		for (int i = 0; i < n; i++) {
			if (viTri[i].second != i) {
				res++;
				swap(viTri[i], viTri[viTri[i].second]);
				i--;
			}
		}
		cout << res << endl;
	}
	return 0;
}