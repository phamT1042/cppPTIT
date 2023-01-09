#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		map<int, int> check;
		for (int &x : a) {
			cin >> x;
			if (x > 0) check[x]++;
		}
		int max = *max_element(a, a + n);
		for (int i = 1; i <= max + 1; i++) {
			if (!(check[i] >= 1)) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}