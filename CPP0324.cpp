#include <bits/stdc++.h>
using namespace std;
long long chiaDuAchoM, m;
long long result (long long x, long long mu) {
	if (mu == 0) return 1;
	long long tmp = result(x, mu / 2);
	if (mu % 2 == 1) return (x % m * (((tmp % m) * (tmp % m)) % m)) % m;
	else return ((tmp % m) * (tmp % m)) % m;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string a;
		long long b;
		cin >> a >> b >> m;
		int lt = 1;
		chiaDuAchoM = 0;
		for (int i = a.length() - 1; i >= 0; i--) {
			chiaDuAchoM += (a[i] - '0') * lt;
			chiaDuAchoM %= m;
			lt *= 10;
			lt %= m;
		}
		cout << result (chiaDuAchoM, b) << endl;
	}
	return 0;
}