#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string x, y;
		cin >> x >> y;
		if (x.length() > y.length()) swap(x, y);
		while (x.length() < y.length()) x = "0" + x;
		string sum = "";
		int nho = 0;
		for (int i = x.length() - 1; i >= 0; i--) {
			int end = (x[i] - '0') + (y[i] - '0') + nho;
			nho = end / 10;
			end %= 10;
			sum = to_string(end) + sum;
		}
		if (nho != 0) sum = "1" + sum;
		cout << sum << endl;
	}
	return 0;
}