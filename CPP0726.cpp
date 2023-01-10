#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--) {
		string a;
		long long b, c, res = 0;
		cin >> a >> b >> c;
		for (int i = 0; i < a.length(); i++) 
            res = (res * 10 + b * (a[i] - '0')) % c;
		cout << res << endl;
	}
}
