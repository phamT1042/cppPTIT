#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; string a;
		cin >> n >> a;
		string x = "";
		for (int i = 0; i < n; i++) {
			switch (a[i]) {
				case '2' :
					x += "2";
					break;
				case '3' :
					x += "3";
					break;
				case '4' :
					x += "322";
					break;
				case '5' :
					x += "5";
					break;
				case '6' :
					x += "53";
					break;
				case '7' :
					x += "7";
					break;
				case '8' :
					x += "2227";
					break;
				case '9' :
					x += "3327";
					break;
			}
		}
		sort(x.begin(), x.end(), greater<char>());
		cout << x << endl;
	}
	return 0;
}