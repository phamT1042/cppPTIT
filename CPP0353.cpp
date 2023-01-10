#include <bits/stdc++.h>
using namespace std;
int main() {
	string a[8] = {"ABCabc", "DEFdef", "GHIghi", "JKLjkl", "MNOmno", "PQRSpqrs", "TUVtuv", "WXYZwxyz"};
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int l = 0, r = s.length() - 1;
		int flag = 1;
		while (l <= r) {
			int check1, check2;
			for (int i = 0; i < 8; i++) {
				if (a[i].find(s[l]) != string::npos) check1 = i;
				if (a[i].find(s[r]) != string::npos) check2 = i;
			}	
			if (check1 == check2) {
				l++;
				r--;
			} else {
				flag = 0;
				break;
			}
		}
		if (flag) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
