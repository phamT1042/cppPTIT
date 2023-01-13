
#include <bits/stdc++.h>
using namespace std;
int minJumps(int a[], int n) {
    int jumps[n];
    if (a[0] == 0) return INT_MAX;
    jumps[0] = 0;
    for (int i = 1; i < n; i++) {
        jumps[i] = INT_MAX;
        for (int j = 0; j < i; j++) {
            if (j + a[j] >= i && jumps[j] != INT_MAX) {
                jumps[i] = min(jumps[i], jumps[j] + 1);
                break;
            }
        }
    }
    return jumps[n - 1];
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        int res = minJumps(a, n);
        if (res != INT_MAX) cout << res << endl;
        else cout << "-1\n";
    }
    return 0;
}