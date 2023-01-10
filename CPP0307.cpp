#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		string tmp;
		set<string> check1;
		stringstream ss1(s1);
		while (ss1 >> tmp) check1.insert(tmp);
		for (string x : check1) {
			if (s2.find(x) == string::npos) cout << x << ' ';
		}
		cout << endl;
	}
	return 0;
}
