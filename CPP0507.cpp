#include <bits/stdc++.h>
using namespace std;
struct PhanSo {
	long long tu, mau;
};
long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
void rutGon(PhanSo &x) {
	long long rut = gcd(x.mau, x.tu);
	x.tu /= rut;
	x.mau /= rut;
}
PhanSo tong(PhanSo x, PhanSo y) {
	PhanSo sum;
	sum.mau = x.mau * y.mau / gcd(x.mau, y.mau);
	sum.tu = x.tu * (sum.mau / x.mau) + y.tu * (sum.mau / y.mau);
	rutGon(sum);
	return sum;
}
void nhap(PhanSo &x) {
	cin >> x.tu >> x.mau;
}
void in(PhanSo x) {
	cout << x.tu << '/' << x.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
