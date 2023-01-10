#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, p;
		cin >> n >> p;
		int x = 0;
		for (int i = 1; i <= n; i++) {
			int test = i;
			while (test % p == 0) {
				x++;
				test /= p;
			}
		}
		cout << x << endl;
	}
	return 0;
}

