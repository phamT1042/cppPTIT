#include <bits/stdc++.h>
using namespace std;
void lower(string &a) {
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
	}
}
void lowerFirst(string &b) {
	if (b[0] >= 'A' && b[0] <= 'Z') b[0] += 32;
	b.erase(1, b.length() - 1);
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
	lower(t[t.size() - 1]);
	cout << t[t.size() - 1];
	for (int i = 0; i < t.size() - 1; i++) {
		lowerFirst(t[i]);
		cout << t[i];
	}
	cout << "@ptit.edu.vn";
	return 0;
}
