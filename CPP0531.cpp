#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int diem[12];
		for (int i = 0; i < 12; i++) {
			cin >> diem[i];
		}
		int AB[3], AC[3], AD[3];
		for (int i = 0; i < 3; i++) {
			AB[i] = diem[i + 3] - diem[i];
			AC[i] = diem[i + 6] - diem[i];
			AD[i] = diem[i + 9] - diem[i];
		}
		int tichCoHuong[3];
		tichCoHuong[0] = AB[1] * AC[2] - AC[1] * AB[2];
		tichCoHuong[1] = AC[0] * AB[2] - AB[0] * AC[2];
		tichCoHuong[2] = AB[0] * AC[1] - AB[1] * AC[0];
		int res = 0;
		for (int i = 0; i < 3; i++) res += tichCoHuong[i] * AD[i];
		if (res == 0) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
