#include <bits/stdc++.h>
using namespace std;
void sinhHoanVi(int a[], int n) {
    int i = 1;
    for (i; i <= n; i++) a[i] = i;
    while (1) {
        for (i = 1; i <= n; i++) cout << a[i];
        cout << ' ';
        i = n - 1;
	    while (i >= 1 && a[i] > a[i + 1]) {
		    i--;
	    }
	    if (i == 0) return;
	    else {
		    int k = n;
		    while (a[i] > a[k]) k--;
		    swap(a[i], a[k]);
		    int l = i + 1, r = n;
		    while (l < r) {
			    swap(a[l++], a[r--]);
		    }
	    }
    }
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n + 1];
		sinhHoanVi(a, n);
		cout << endl;
	}
	return 0;
}
