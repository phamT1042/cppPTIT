#include <bits/stdc++.h>
using namespace std;
string to_lower(string x) {
	for (int i = 0; i < x.length(); i++) {
		if (x[i] >= 'A' && x[i] <= 'Z') x[i] += 32;
	}
	return x;
}
int main() {
	ifstream fileIn1;
	ifstream fileIn2;
	fileIn1.open("DATA1.in", ios::in);
	fileIn2.open("DATA2.in", ios::in);
	string x;
	set<string> hop;
	map<string, int> giao;
	while (fileIn1 >> x) {
		x = to_lower(x);
		hop.insert(x);
		giao[x] = 1;
	}
	while (fileIn2 >> x) {
		x = to_lower(x);
		hop.insert(x);
		if (giao[x] == 1) giao[x] = 2;
	}
	for (string x : hop) {
		cout << x << ' ';
	}
	cout << endl;
	for (pair<string, int> x : giao) {
		if (x.second == 2) cout << x.first << ' ';
	}
	fileIn1.close();
	fileIn2.close();
	return 0;
}