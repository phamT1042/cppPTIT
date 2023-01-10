#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		sort(a, a + n);
		if (n % 2 == 0) {
			vector<int> v1(a, a + n / 2);
			vector<int> v2(a + n / 2, a + n);
			for (int i = 0; i < n / 2; i++) {
				cout << v1[i] << ' ' << v2[i] << ' ';
			}
		} else {
			vector<int> v1(a, a + n / 2 + 1);
			vector<int> v2(a + n / 2 + 1, a + n);
			for (int i = 0; i < n / 2; i++) {
				cout << v1[i] << ' ' << v2[i] << ' ';
			}
			cout << v1[n / 2];
		}
		cout << endl;
	}
	return 0;
}
