#include<bits/stdc++.h>
using namespace std;
int main() {
	ifstream fileIn;
	fileIn.open("DATA.in", ios::in);
	int dem = 0, n, m;
	set<int> day1;
	set<int> day2;
	int x;
	while (fileIn >> x) {
		dem++;
		if (dem == 1) n = x;
		if (dem == 2) m = x;
		if (dem > 2) {
			if (dem <= 2 + n) day1.insert(x);
			else day2.insert(x);
		}
	}
	for (int x : day1) {
		if (day2.count(x) != 0) cout << x << ' ';
	}
	return 0;
}