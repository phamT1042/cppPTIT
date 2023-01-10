#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		string a;
		long long x ,y;
		cin >> a >> x >> y;
		long long tmp = gcd(x,y);
		for(long long i = 0; i < tmp; i++) cout << a;
		cout << endl;
	}
	return 0;
}
