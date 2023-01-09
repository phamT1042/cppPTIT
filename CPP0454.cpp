#include<bits/stdc++.h>
using namespace std;
int main() {
	int T, n, flag, i, j;
	cin >> T;
	while(T--) {
		flag = 0;
		cin >> n;
		long long a[n], test, swap, x, y, z;
		for(i = 0; i < n; i++) {
			cin >> test;
			a[i] = test * test;
		}
		sort(a, a + n);
		for(i = 0; i < n; i++) {
			int left = n - 2 , right = n - 1;
			x = a[i];
			while(left > i) {
				y = a[left];
				z = a[right];
				long long hieu = z - y;
				if (hieu == x) {
					flag = 1;
					break;
				} else if (hieu > x)
					right--;
				else
					left--;
			}
			if(flag) {
				break;
			}
		}
		if (flag) {
			printf("YES\n");
		} else printf("NO\n");

	}
}
