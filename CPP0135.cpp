#include <bits/stdc++.h>
using namespace std;
int a[10001];
void sangNguyenTo() {
	int j, i;
	for (i = 0; i < 10001; i++) {
		a[i] = 1;
	}
	a[0] = a[1] = 0;
	for (i = 2; i < 100; i++) {
		if (a[i]) {
			for (j = i * i; j < 10001; j += i) {
				a[j] = 0;
			}
		}
	}
}
int main() {
	sangNguyenTo();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int i = 2;
		while (i * i < n) {
			if (a[i])
				cout << i * i << ' ';
			i++;
		}
		cout << endl;
	}
	return 0;
}
