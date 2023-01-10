#include<bits/stdc++.h>
using namespace std;
int main() {
	int t ; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int a[n];
		int countAll = 0;
		for (int &x : a) {
			cin >> x;
			if (x <= k) countAll++;
		}
		int countWindow = 0;
		for (int i = 0; i < countAll; i++) {
			if (a[i] <= k) countWindow++;
		}
		int maxWindow = countWindow;
		for (int i = countAll; i < n; i++) {
			if (a[i - countAll] <= k) countWindow--;
			if (a[i] <= k) countWindow++;
			maxWindow = max(maxWindow, countWindow);
		}
		cout << countAll - maxWindow << endl;
	}
	return 0 ;
}
