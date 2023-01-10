#include <bits/stdc++.h>
using namespace std;
string to_lower(string x) {
	for (int i = 0; i < x.length(); i++) {
		if (x[i] >= 'A' && x[i] <= 'Z') x[i] += 32;
	}
	return x;
}
int main() {
	ifstream fileIn;
	fileIn.open("VANBAN.in", ios::in);
	string x;
	set<string> res;
	while (fileIn >> x) {
		x = to_lower(x);
		res.insert(x);
	}
	for (string x : res) {
		cout << x << endl;
	}
	fileIn.close();
	return 0;
}
