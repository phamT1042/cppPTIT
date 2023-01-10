#include <bits/stdc++.h>
using namespace std;
int sangNT[100001];
void khoiTao () {
	for (int i = 0; i <= 100000; i++) {
		sangNT[i] = 1;
	}
	sangNT[0] = sangNT[1] = 0;
	for (int i = 2; i <= 316; i++) {
		if (sangNT[i]) {
			for (int j = i * i; j <= 100000; j += i) {
				sangNT[j] = 0;
			}
		}
	}
}
int tongCS (int x) {
	int sum = 0;
	while (x != 0) {
		sum += x % 10;
		x /= 10;
	}
	return sum;
}
int main() {
	khoiTao();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int check = n;
		if (sangNT[n]) cout << "NO\n";
		else {
			int sumTS = 0;
			for (int i = 2; i <= n; i++) {
				while (n % i == 0) {
					sumTS += tongCS(i);
					n /= i;
				}
			}
			if (sumTS == tongCS(check)) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	return 0;
}
