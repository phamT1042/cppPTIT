#include <bits/stdc++.h>
using namespace std;
void chuyen(vector<string> &v) {
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].length(); j++) {
			if (v[i][j] >= 'A' && v[i][j] <= 'Z') v[i][j] += 32;
		}
	}
}
int main() {
	int t;
	cin >> t;
	cin.ignore();
	map<string, int> check;
	while (t--) {
		string s;
		getline(cin, s);
		vector<string> tach;
		stringstream ss(s);
		string tmp;
		while (ss >> tmp) tach.push_back(tmp);
		chuyen(tach);
		string mau = tach[tach.size() - 1];
		for (int i = 0; i < tach.size() - 1; i++) {
			mau += tach[i][0];
		}
		check[mau]++;
		if (check[mau] == 1) cout << mau << "@ptit.edu.vn" << endl;
		else cout << mau << check[mau] << "@ptit.edu.vn" << endl;
	}
}
