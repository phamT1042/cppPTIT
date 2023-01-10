#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string x, y;
		cin >> x >> y;
		while(x.length() < y.length()) x = "0" + x;
		while(x.length() > y.length()) y = "0" + y;
		if (y > x) swap(x, y);
		string hieu = "";
		int nho = 0;
		for (int i = x.length() - 1; i >= 0; i--) {
			int end = (x[i] - '0') - (y[i] - '0') - nho;
			if (end < 0) {
				end += 10;
				nho = 1;
			} else nho = 0;
			hieu = to_string(end) + hieu;
		}
		cout << hieu << endl;
	}
	return 0;
}