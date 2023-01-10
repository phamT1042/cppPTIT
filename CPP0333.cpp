#include <bits/stdc++.h>
using namespace std;
void upTen(string &a) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 32;
	}
}
void up(string &b) {
	if (b[0] >= 'a' && b[0] <= 'z') b[0] -= 32;
	for  (int i = 1; i < b.length(); i++) {
		if (b[i] >= 'A' && b[i] <= 'Z') b[i] += 32;
	}
}
int main() {
	string s;
	getline(cin, s);
	vector<string> t;
	stringstream ss(s);
	string tmp;
	while (ss >> tmp) {
		t.push_back(tmp);
	}
	for (int i = 0; i < t.size(); i++) {
		if (i == t.size() - 1) {
			upTen(t[i]);
			cout << t[i];
		}
		else {
			up(t[i]);
			cout << t[i];
			if (i == t.size() - 2) cout << ", ";
			else cout << " ";
		}
	}
	return 0;
}
