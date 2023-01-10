#include <bits/stdc++.h>
using namespace std;
struct PhanSo {
	long long tu, mau;
};
long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
void rutgon(PhanSo &a) {
	long long rut = gcd(a.tu, a.mau);
	a.tu /= rut;
	a.mau /= rut;
}
void in(PhanSo a) {
	cout << a.tu << '/' << a.mau;
}
void nhap(PhanSo &a) {
	cin >> a.tu >> a.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
