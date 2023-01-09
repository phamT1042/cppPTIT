#include <bits/stdc++.h>
using namespace std;
bool check(int x) {
	int chan = 0, le = 0;
	while (x != 0) {
		if ((x % 10) % 2 == 0) chan++;
		else le++;
		x /= 10;
	}
	if (chan == le) return true;
	return false;
}
int main() {
	int n;
	cin >> n;
	int count = 0;
	int start = pow(10, n - 1), end = pow(10, n);
	for (int i = start; i < end; i++) {
		if (check(i)) {
			cout << i;
			count++;
			if (count < 10)  cout << ' ';
			else {
				count = 0;
				cout << endl;
			}
		}
	}
	return 0;
}