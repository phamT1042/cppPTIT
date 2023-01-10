#include <bits/stdc++.h>
using namespace std;
bool checkTangGiam(long long x) {
	int check = x % 10;
	x /= 10;
	if (x % 10 > check) {
		check = x % 10;
		x /= 10;
		while (x != 0) {
			if (x % 10 <= check) return false;
			check = x % 10;
			x /= 10;
		}
	} else if (x % 10 == check) return false;
	else {
		check = x % 10;
		x /= 10;
		while (x != 0) {
			if (x % 10 >= check) return false;
			check = x % 10;
			x /= 10;
		}
	}
	return true;
}
bool checkNT(long long x) {
	for (long long i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) return false;
	}
	return true;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		long long start = pow(10, n - 1);
		long long end = pow(10, n);
		long long count = 0;
		for (long long i = start; i < end; i++) {
			if (checkTangGiam(i)) {
				if (checkNT(i))
					count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
