#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		map<int, int> check;
        int sum = 0;
		for (int i = 2; i <= n; i++) {
			while (n % i == 0) {
				check[i]++;
                sum++;
				n /= i;
			}
		}
		if (check.size() != 3 || sum > check.size()) cout << "0\n";
		else cout << "1\n";
	}
	return 0;
}