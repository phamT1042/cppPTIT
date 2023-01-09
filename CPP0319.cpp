#include <bits/stdc++.h>
using namespace std;
int main() {
	int m, s;
	cin >> m >> s;
	if (m == 1 && s == 0) cout << "0 0";
	else {
		if ((s == 0 && m > 1) || s > m * 9) cout << "-1 -1";
		else {
			int a[m] = {0}, b[m] = {0};
			int i = 0;
			for (i = 0; i < m; i++) {
				if (s < 10) {
					a[i++] = s;
					break;
				} else {
					a[i] = 9;
					s -= 9;
				}
			}
			for (i = 0; i < m; i++) {
				b[i] = a[m - 1 - i];
			}
			if (b[0] == 0) {
				b[0] = 1;
			    i = 1;
				while (b[i] == 0) i++;
				b[i] -= 1;
			}
			for (int i = 0; i < m; i++) cout << b[i];
			cout << ' ';
			for (int i = 0; i < m; i++) cout << a[i];
		}
	}
	return 0;
}