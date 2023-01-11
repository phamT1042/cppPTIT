#include<bits/stdc++.h>
using namespace std;
char a[21][21];
int solve (int n) {
    int cot[n + 1][n + 1], hang[n + 1][n + 1];
    for (int i = 0; i < n + 1; i++) {
        hang[0][i] = hang[i][0] = 0;
        cot[0][i] = cot[i][0] = 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == 'X') {
                cot[i][j] = cot[i - 1][j] + 1;
                hang[i][j] = hang[i][j - 1] + 1;
            }
            else {
                cot[i][j] = hang[i][j] = 0;
            }
        }
    }
    int max = 0;
    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= 1; j--) {
            int small = min(hang[i][j], cot[i][j]);
            while (small > max) {
                if (cot[i][j - small + 1] >= small && hang[i - small + 1][j] >= small)
                    max = small;
                small--;
            }
        }
    }
    return max;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) 
                cin >> a[i][j];
        }
        cout << solve(n) << endl;
    }
    return 0;
}