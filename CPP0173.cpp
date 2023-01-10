#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
long long bcnn(long long a, long long b) {
	return a * b / gcd(a, b);
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		long long x, y, z, n;
		cin >> x >> y >> z >> n;
		long long bc = bcnn(x, bcnn(y, z));
		long long dau = pow(10, n-1);
		long long cuoi = pow(10, n);
		long long a = dau / bc;
		long long b = cuoi/ bc;
		if(b < 1 && a < 1) {
			cout<< "-1" << endl;
		} else {
			if(a * bc < dau) {
				cout << (++a) * bc << endl;
			} else {
				cout << a * bc << endl;
			}
		}
	}
}
