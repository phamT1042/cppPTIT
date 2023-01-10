#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		int k, res = 0;
		cin >> s >> k;
		for (int i = 0; i < s.length(); i++) {
			set<char> check;
			for (int j = i; j < s.length(); j++) {
				check.insert(s[j]);
				if (check.size() == k) res++;
				if (check.size() > k) break;
			}
		}
		cout << res << endl;
	}
	return 0;
}

