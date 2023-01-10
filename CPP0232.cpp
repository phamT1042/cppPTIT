#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[n][m];
		int count[n][m];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
				if (i == 0) {
					if (a[i][j] == 1) count[i][j] = 1;
					else count[i][j] = 0;
				} else {
					if (a[i][j] == 1) count[i][j] = count[i - 1][j] + 1;
					else count[i][j] = 0;
				}
			}
		} //step 1: dem cac phan tu 1 lien tiep
		//ex:   0 1 0 1 0     0 1 0 1 0
        //      0 1 0 1 1     0 2 0 2 1
        //      1 1 0 1 0     1 3 0 3 0
        //      1 0 1 0 1     2 0 1 0 1
		for (int i = 0; i < n; i++) {
			sort(count[i], count[i] + m, greater<int>());
		} //step 2: sap xep cac ptu tren 1 hang giam dan, o day chinh la sap xep cac cot
		//ex:   0 1 0 1 0     1 1 0 0 0
        //      0 2 0 2 1     2 2 1 0 0
        //      1 3 0 3 0     3 3 1 0 0
        //      2 0 1 0 1     2 1 1 0 0
		int res = INT_MIN;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (count[i][j] > 0) res = max(res, count[i][j] * (j + 1));
			}
		} //steo 3: hcn max = gia tri ham count * cot hien tai
		cout << res << endl;
	}
	return 0;
}