#include <bits/stdc++.h>
using namespace std;
int MIN = -999999999;
int MAX = 999999999;
bool check1 (string x) {
	for (char s : x) {
		if (s < '0' || s > '9') {
			return false;
		}
	}
	return true;
}
int check2 (string s) {
	int res = 0;
	for (char x : s) {
		res = res * 10 + (x - '0');
		if (res < MIN || res > MAX)
			return 0;
	}
	return res;
}
int main() {
	ifstream fileIn;
	fileIn.open("DATA.in", ios::in);
	string x;
	long long sum = 0;
	while (fileIn >> x) {
		if (check1(x)) {
			sum += check2(x);
		}
	}
	cout << sum;
	fileIn.close();
	return 0;
}