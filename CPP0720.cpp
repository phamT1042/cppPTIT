#include<bits/stdc++.h>
using namespace std;
int tang[101], giam[101];
int dayBitonic (int a[], int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] > a[j]) 
                tang[i] = max (tang[i], tang[j] + 1);
        }
    }
    for (int i = n - 2; i >= 0; i--) {
        for (int j = n - 1; j > i; j--) {
            if (a[i] > a[j]) 
                giam[i] = max (giam[i], giam[j] + 1);
        }
    }
    int result = INT_MIN;
    for (int i = 0; i < n; i++) {
        result = max (result, tang[i] + giam[i] - 1);
    }
    return result;
}
int main () {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            tang[i] = giam[i] = 1;
        }
        cout << dayBitonic(a, n) << endl;
    }
    return 0;
}