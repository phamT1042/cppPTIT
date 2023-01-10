#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		int thaoTac1 = 0;
		int thaoTac2 = 0;
		for (int x : a) {
			int thaoTac2voi1so = 0;
			while (x > 0) {
				if (x % 2 == 0) {
					x /= 2;
					thaoTac2voi1so++;
				} else {
					x -= 1;
					thaoTac1++;
				}
			}
			thaoTac2 = max(thaoTac2, thaoTac2voi1so);
		}
		cout << thaoTac1 + thaoTac2 << endl;
	}
	return 0;
}

