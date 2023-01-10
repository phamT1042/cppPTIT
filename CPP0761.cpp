#include <bits/stdc++.h>
using namespace std;
long long gcd (long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
long long find (string b, long long a) { //tim b % a dua ve long long
	long long res = 0;
	for (int i = 0; i < b.length(); i++) {
		res = (res * 10) + b[i] - '0';
		res %= a;
	}
	return res;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		long long a; cin >> a;
		string b; cin >> b;
		cout << gcd(a, find(b, a)) << endl;
	}
	return 0;
}

