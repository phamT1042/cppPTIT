#include <bits/stdc++.h>
using namespace std;
void sinhNP (int a[], int n) {
    int i;
	for (i = 1; i <= n; i++) a[i] = 0;
    while (1) {
        for (int i = 1; i <= n; i++) cout << a[i];
        cout << ' ';
        i = n;
        while (i >= 1 && a[i] == 1) a[i--] = 0;
        if (i == 0) return;
        else a[i] = 1;
    }
}
int main() {
	int t;
	cin >> t;
	while (t--) {
        int n; cin >> n; 
        int a[n + 1];
		sinhNP(a, n);
		cout << endl;
	}
	return 0;
}