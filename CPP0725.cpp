#include<bits/stdc++.h>
using namespace std;
long long C[1001][1001];
int MOD = 1e9 + 7;
void khoiTao() {
	for (int i = 0; i < 1001; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) C[i][j] = 1;
			else {
				C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
				C[i][j] %= MOD;
			}
		}
	}
}
int main() {
	khoiTao();
	int t;
	cin >> t;
	while (t--) {
		int n, r;
		cin >> n >> r;
		if (r > n) swap(r, n);
		cout << C[n][r] << endl;
	}
	return 0;
}