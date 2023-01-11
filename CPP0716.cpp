#include <bits/stdc++.h>
using namespace std;
int a[21][21];
int res, n, k;
void Try(int i, int j, int sum) {
    if (sum > k) return;
    if (sum == k && i == n - 1 && j == n - 1) {
        res++;
    }
    if (i + 1 < n) {
        Try(i + 1, j, sum + a[i + 1][j]);
    }
    if (j + 1 < n) {
        Try(i, j + 1, sum + a[i][j + 1]);
    }
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Try(0, 0, a[0][0]);
        cout << res << endl;
    }
}