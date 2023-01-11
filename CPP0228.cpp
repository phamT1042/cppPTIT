#include<bits/stdc++.h>
using namespace std;
int a[40][40];
void day1 (int n) {
    stack<int> d1;
    int x = 4 * n - 1;
    int startHang = 4 * n - 1, startCot;
    int endHang, endCot = 4 * n - 1;
    while (1) {
        if (x < 4 * n - 1) {
            startHang = endHang - 1;
        }
        endHang = startHang - x;
        startCot = endCot;
        for (int i = startHang; i >= endHang; i--) {
            d1.push(a[i][startCot]);
        }
        x -= 2;
        startHang = endHang;
        startCot = endCot - 1;
        endCot = startCot - x;
        for (int i = startCot; i >= endCot; i--) {
            d1.push(a[startHang][i]);
        }
        startCot = endCot;
        startHang = endHang + 1;
        endHang = startHang + x;
        for (int i = startHang; i <= endHang; i++) {
            d1.push(a[i][startCot]);
        }
        x -= 2;
        if (x < 0) break;
        startHang = endHang;
        startCot = endCot + 1;
        endCot = startCot + x;
        for (int i = startCot; i <= endCot; i++) {
            d1.push(a[startHang][i]);
        }
    }
    while (!d1.empty()) {
        cout << d1.top() << ' ';
        d1.pop();
    }
    cout << endl;
}
void day2 (int n) {
    stack<int> d2;
    int x = 4 * n - 1;
    int startHang = 0, startCot;
    int endHang, endCot = 0;
    while (1) {
        if (x < 4 * n - 1) {
            startHang = endHang + 1;
        }
        endHang = startHang + x;
        startCot = endCot;
        for (int i = startHang; i <= endHang; i++) {
            d2.push(a[i][startCot]);
        }
        x -= 2;
        startHang = endHang;
        startCot = endCot + 1;
        endCot = startCot + x;
        for (int i = startCot; i <= endCot; i++) {
            d2.push(a[startHang][i]);
        }
        startCot = endCot;
        startHang = endHang - 1;
        endHang = startHang - x;
        for (int i = startHang; i >= endHang; i--) {
            d2.push(a[i][startCot]);
        }
        x -= 2;
        if (x < 0) break;
        startHang = endHang;
        startCot = endCot - 1;
        endCot = startCot - x;
        for (int i = startCot; i >= endCot; i--) {
            d2.push(a[startHang][i]);
        }
    }
    while (!d2.empty()) {
        cout << d2.top() << ' ';
        d2.pop();
    }
    cout << endl;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int insert = 1;
        for (int i = 0; i < 4 * n; i++) {
            for (int j = 0; j < 4 * n; j++) {
                a[i][j] = insert++;
            }
        }
        day1(n);
        day2(n);
    }
    return 0;
}