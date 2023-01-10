#include <bits/stdc++.h>
using namespace std;
int C[1001];
void khoiTao() {
	for (int i = 2; i <= 1000; i++) {
		C[i] = i * (i - 1) / 2;
	}
}
int main() {
	khoiTao();
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		map<char, int> mp;
		for (int i = 0; i < s.length(); i++) mp[s[i]]++;
		long long count = 0;
		for (pair<char, int> x : mp) {
			if (x.second == 1) count += 1;
			else {
				count += C[x.second] + x.second;
			}
		}
		cout << count << endl;
	}
	return 0;
}
