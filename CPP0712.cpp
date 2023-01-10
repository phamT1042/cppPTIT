#include <bits/stdc++.h>
using namespace std;
int n, k, a[22];
void Init() {
    for (int i = 0; i <= k; i++) a[i] = 0;
}
void Result() {
    for (int i = 1; i <= k; i++) cout << a[i];
    cout << ' ';
}
void Try (int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; j++) {
        a[i] = j;
        if (i == k) Result();
        else Try(i + 1);
    }
}
int main() {
	int t;
	cin >> t;
	while(t--) {
        cin >> n >> k;
        Init();
        Try(1);
        cout << endl;
	}
	return 0;
}
