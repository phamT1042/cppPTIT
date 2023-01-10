#include <bits/stdc++.h>
using namespace std;
int main() {
	int fibo[1001] = {0};
	fibo[0] = fibo[1] = 1;
	int i = 0, j = 1, k;
	while (i + j < 1001) {
		k = i + j;
		fibo[k] = 1;
		i = j;
		j = k;
	}
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		vector<int> res;
		for (int &x : a) {
			cin >> x;
			if (fibo[x]) res.push_back(x);
		}
		for (int x : res) cout << x << ' ';
		cout << endl;
	}
	return 0;
}
