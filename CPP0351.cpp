#include <bits/stdc++.h>
using namespace std;
void chuyen(vector<string> &v) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i][0] >= 'a' && v[i][0] <= 'z') v[i][0] -= 32;
		for (int j = 1; j < v[i].length(); j++) {
			if (v[i][j] >= 'A' && v[i][j] <= 'Z') v[i][j] += 32;
		}
	}
}
void inCach1(vector<string> v) {
	cout << v[v.size() - 1] << ' ';
	for (int i = 0; i < v.size() - 1; i++) {
		cout << v[i] << ' ';
	}
}
void inCach2(vector<string> v) {
	for (int i = 1; i < v.size(); i++) {
		cout << v[i] << ' ';
	}
	cout << v[0] << ' ';
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int select;
		cin >> select;
		cin.ignore();
		string s;
		getline(cin, s);
		vector<string> tach;
		stringstream ss(s);
		string tmp;
		while (ss >> tmp) tach.push_back(tmp);
		chuyen(tach);
		if (select == 1) inCach1(tach);
		else inCach2(tach);
		cout << endl;
	}
}
