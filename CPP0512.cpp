#include<bits/stdc++.h>
using namespace std;
struct PhanSo {
	long long tu, mau;
};
PhanSo check(PhanSo x) {
	if (x.tu < 0 && x.mau < 0) {
		x.tu = abs(x.tu);
		x.mau = abs(x.mau);
	} else if (x.tu > 0 && x.mau < 0) {
		x.tu = 0 - x.tu;
		x.mau = abs(x.mau);
	}
	return x;
}
long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
void rutGon(PhanSo a) {
	long long ucln = gcd(a.tu, a.mau);
	cout << a.tu / ucln << "/" << a.mau / ucln << ' ';
}
void process(PhanSo x, PhanSo y) {
	x = check(x);
	y = check(y);
	PhanSo c;
	c.mau = x.mau * y.mau / gcd(x.mau, y.mau);
	c.tu = x.tu * c.mau / x.mau + y.tu * c.mau / y.mau;
	PhanSo C;
	C.tu = c.tu * c.tu;
	C.mau = c.mau * c.mau;
	rutGon(C);
	PhanSo d;
	d.tu = x.tu * C.tu * y.tu;
	d.mau = x.mau * C.mau * y.mau;
	rutGon(d);
	cout << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}