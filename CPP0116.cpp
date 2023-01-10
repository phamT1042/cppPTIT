#include <bits/stdc++.h>
using namespace std;
int sang[10001];
void tao() {
	for (int i = 0; i < 10001; i++) sang[i] = 1;
	sang[0] = sang[1] = 0;
	for (int i = 0; i <= 100; i++) {
		if (sang[i]) {
			for (int j = i * i; j <= 10000; j += i) {
				sang[j] = 0;
			}
		}
	}
}
int main() {
	tao();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << "1 ";
		for (int i = 2; i <= n; i++) {
			if (i % 2 == 0) cout << "2 ";
			else {
				if (sang[i]) cout << i << ' ';
				else {
					for (int j = 2; j <= i; j++) {
						if (i % j == 0) {
							cout << j << ' ';
							break;
						}
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}
