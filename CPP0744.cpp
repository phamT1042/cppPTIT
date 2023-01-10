#include<bits/stdc++.h>
using namespace std;
long long C[1001][1001];
void tao() {
	for (int i = 0; i < 1001; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || i == j) C[i][j] = 1;
			else {
				C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
			}
		}
	}
}
int main() {
	int t;
	cin >> t;
	tao();
	while (t--) {
		int n, r, b, g;
		cin >> n >> r >> b >> g;
		long long res = 0;
		for (int i = r; i <= n; i++) {
			for (int j = b; j <= n - i - g; j++) {
				res += C[n][i] * C[n - i][j];
			}
		}
		cout << res << endl;
	}
}