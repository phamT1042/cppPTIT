#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k, x;
		cin >> n;
		memset(a, sizeof(int), 0);
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		cin>> k >> x;
		int search = lower_bound(a, a + n, x) - a;
		int l, r;
		if (a[search] == x) {
			l = search - 1;
			r = search + 1;
		} else {
			r = search;
			l = search - 1;
		}
		for(int i = k / 2 - 1; i >= 0; i--) {
			cout << a[l - i] << ' ';
		}
		for(int i = 0; i < k/2; i++) {
			cout<< a[r + i] <<' ';
		}
		cout << endl;
	}
	return 0;
}
