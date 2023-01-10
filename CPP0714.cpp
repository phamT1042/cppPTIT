#include<bits/stdc++.h>
using namespace std;
int flag;
void hoanViTruoc(int a[], int n) {
	int end = 1;
	int i = n - 1;
	while (i >= 1 && a[i] < a[i + 1]) i--;
	int j = n;
	while (a[i] < a[j]) j--;
	swap(a[i], a[j]);
	int l = i + 1, r = n;
	while (l < r) {
		swap(a[l++], a[r--]);
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n + 1];
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		hoanViTruoc(a, n);
		for (int i = 1; i <= n; i++) {
			cout << a[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}
