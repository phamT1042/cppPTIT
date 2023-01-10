#include <bits/stdc++.h>
using namespace std;
int main() {
	ifstream fileIn;
	fileIn.open("DATA.in", ios::in);
	int x;
	map<int, int> dem;
	while (fileIn >> x) {
		dem[x]++;
	}
	for (auto it : dem) {
		cout << it.first << ' ' << it.second << endl;
	}
	fileIn.close();
	return 0;
}