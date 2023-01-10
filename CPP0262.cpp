#include <bits/stdc++.h>
using namespace std;
long long gcd (long long a, long long b) {
	if (b == 0) return a;
	return gcd (b, a % b);
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n, m; cin >> n >> m;
		long long sumN = (n + 1) * n / 2;
		if ((sumN + m) % 2 == 0) {
			long long sumDay1 = (sumN + m) / 2, sumDay2 = (sumN - m) / 2;
			if (gcd(sumDay1, sumDay2) == 1) cout << "Yes\n";
			else cout << "No\n"; 
		} else cout << "No" << endl;
	}
	return 0;
}

