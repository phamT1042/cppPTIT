#include <bits/stdc++.h>
using namespace std;
bool check(string x) {
	if (x.length() < 2) return false;
	int l = 0, r = x.length() - 1;
	while (l < r) {
		if (x[l] != x[r]) return false;
		l++;
		r--;
	}
	return true;
}
bool cmp(string a, string b) {
	if (a.length() != b.length()) return a.length() > b.length();
	return a > b;
}
int main() {
	vector<string> words;
	map<string, int> count;
	string s;
	while(cin >> s) {
		if (check(s)) {
			words.push_back(s);
			count[s]++;
		}
	}
	sort(words.begin(), words.end(), cmp);
	for (int i = 0; i < words.size(); i++) {
		if (count[words[i]] > 0) {
			cout << words[i] << ' ' << count[words[i]] << endl;
			count[words[i]] = 0;
		}
	}
	return 0;
}
