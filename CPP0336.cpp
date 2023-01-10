#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		string s1, s2; cin >> s1 >> s2;
		int cnt2[26]= {0}, cnt1[26]= {0};
		for(int i = 0; i < s2.length(); i++) {
			cnt2[s2[i] - 'a']++;
		}
		int res = INT_MAX, start = 0, index = -1, dem = 0;
		for (int i = 0; i < s1.length() ; i++) {
			cnt1[s1[i] - 'a']++;
			if (cnt1[s1[i] - 'a'] <= cnt2[s1[i] - 'a']) dem++;
			if(dem == s2.length()) {
				while (cnt1[s1[start] - 'a'] > cnt2[s1[start] - 'a'] || cnt2[s1[start] - 'a'] == 0) {
					if (cnt1[s1[start] - 'a'] > cnt2[s1[start] - 'a'])
						cnt1[s1[start] - 'a']--;
					++start;
				}
				if (res > i - start + 1) {
					res = i - start + 1;
					index = start;
				}
			}
		}
		if(index == -1) {
			cout << "-1\n";
		} else
			cout << s1.substr(index, res) << endl;
	}
	return 0;
}
