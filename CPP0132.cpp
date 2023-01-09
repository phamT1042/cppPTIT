#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		long long result = 0;
		for (int i = 2; i <= sqrt(n); i++) {
			while (n % i == 0) {
				result = i;
				n /= i;
			}
		}
		if (n != 1) result = max(result, n);
		cout << result << endl;
	}
	return 0;
}
