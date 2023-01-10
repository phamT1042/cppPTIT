#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n], end[n];
		for (int i = 0; i < n; i++) {
            cin >> a[i];
            end[i] = a[i];
        }
		sort(end, end + n);
        int l = 0, r = n - 1;
        while (a[l] == end[l]) l++;
        while (a[r] == end[r]) r--;
        cout << l + 1 << ' ' << r + 1 << endl;
	}
	return 0;
}