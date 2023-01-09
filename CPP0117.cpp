#include<bits/stdc++.h>
using namespace std;
main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		long long sum;
		while (s.length() > 1) {
			sum = 0;
			for (char x : s) sum += x - '0';
			s = to_string(sum);
		}
		cout << s << endl;
	}
}
