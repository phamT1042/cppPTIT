#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s; cin >> s;
		int cnt1[26] = {0};
		set<char> s2;
		for (int i = 0; i < s.length(); i++) {
			s2.insert(s[i]);
		}
		int res = INT_MAX, dem = 0, start = 0;
		for (int i = 0; i < s.length(); i++) {
			cnt1[s[i] - 'a']++;
			if (cnt1[s[i] - 'a'] <= 1) dem++;
			if (dem == s2.size()) {
				while (cnt1[s[start] - 'a'] > 1 || s2.count(s[start]) == 0) {
					if (cnt1[s[start] - 'a'] > 1) cnt1[s[start] - 'a']--;
					start++;
				}
				res = min(res, i - start + 1);
			}
		}
		cout << res << endl;
	}
	return 0;
}

