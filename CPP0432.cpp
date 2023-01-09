#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b) {
	return a + b > b + a;
}
int main() {
	int t ;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string a[n];
		for (string &x : a) cin >> x;
		sort(a, a + n, cmp);
		for (string x : a) cout << x;
		cout << endl;
	}
	return 0 ;
}
