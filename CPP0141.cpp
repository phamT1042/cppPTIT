#include <bits/stdc++.h>
using namespace std;
long long fibo[92];
void tao() {
	fibo[0] = 1;
	fibo[1] = 1;
	for (int i = 2; i < 92; i++) fibo[i] = fibo[i - 1] + fibo[i - 2];
}
int main() {
	tao();
	int t;
	cin >> t;
	while (t--) {
		int flag = 0;
		long long n;
		cin >> n;
		if (n == 0) {
			flag = 1;
		} else {
			for (int i = 0; i < 92; i++) {
				if (n == fibo[i]) {
					flag = 1;
					break;
				}
			}
		}
		if (flag) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
