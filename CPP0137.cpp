#include <bits/stdc++.h>
using namespace std;
int sangNT[1000001];
void khoiTao () {
	for (int i = 0; i <= 1000000; i++) {
		sangNT[i] = 1;
	}
	sangNT[0] = sangNT[1] = 0;
	for (int i = 2; i <= 1000; i++) {
		if (sangNT[i]) {
			for (int j = i * i; j <= 1000000; j += i) {
				sangNT[j] = 0;
			}
		}
	}
}
int main() {
	khoiTao();
	int t;
	cin >> t;
	while (t--) {
		long long l, r; cin >> l >> r;
		if (l > r) swap(l, r);
		long long i = 0;
		while (i * i < l) i++;
		int count = 0;
		for (i; i * i <= r; i++) {
			if (sangNT[i]) count++;
		}
		cout << count << endl;
	}
	return 0;
}
