#include <bits/stdc++.h>
using namespace std;
int checknt(int n) {
	if (n == 0 || n == 1) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int x;
		cin >> x;
		int cmp = x;
		set<int> nt;
		for (int i = 2; i <= cmp; i++) {
			while (cmp % i == 0) {
				nt.insert(i);
				cmp /= i;
			}
		}
		int res = x;
		for (int y : nt) {
			res *= (y - 1) * 1.0f / y;
		}
		cout << checknt(res) << endl;
	}
	return 0;
}
