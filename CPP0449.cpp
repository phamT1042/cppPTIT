#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		int a[n];
		int flag = -1;
		map<int, int> check;
		for (int &y : a) {
			cin >> y;
			check[y] = 1;
		}
		for (int i = 0; i < n; i++) {
			if (check[abs(a[i] - x)] != 0 || check[a[i] + x] != 0) {
				flag = 1;
				break;
			}
		}
		cout << flag << endl;
	}
	return 0 ;
}