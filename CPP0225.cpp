#include <bits/stdc++.h>
using namespace std;
main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n][n];
		int sumHang[n] = {0}, sumCot[n] = {0}, maxHC = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
				sumHang[i] += a[i][j];
				sumCot[j] += a[i][j];
			}
		}
		maxHC = max(*max_element(sumHang, sumHang + n), *max_element(sumCot, sumCot + n));
		int step = 0;
		int i = 0, j = 0;
		while(i < n && j < n) {
			int r = min(maxHC - sumHang[i], maxHC - sumCot[j]);
			a[i][j] += r;
			sumHang[i] += r;
			sumCot[j] += r;
			step += r;
			if(sumHang[i] == maxHC) i++;
			if(sumCot[j] == maxHC) j++;
		}
		cout << step << endl;
	}
}
