#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
        vector<int> valid;
		for (int i = 0; i < n - 1; i++) {
			if (a[i] != 0) {
                if (a[i + 1] != 0 && a[i] == a[i + 1]) {
                    a[i + 1] = 0;
                    valid.push_back(a[i] * 2);
                }
                else valid.push_back(a[i]);
            }
		}
		if (a[n - 1] != 0) valid.push_back(a[n - 1]);
        for (int x : valid) cout << x << ' ';
        for (int i = 0; i < n - valid.size(); i++) {
            cout << "0 ";
        }
		cout << endl;
	}
	return 0;
}