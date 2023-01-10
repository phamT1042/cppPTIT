#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
class PhanSo {
	private:
		long long tu, mau;
	public:
		PhanSo (long long, long long);
		friend istream &operator >> (istream &in, PhanSo &x);
		friend ostream &operator << (ostream &out, PhanSo x);
		PhanSo operator + (PhanSo other);
};
istream &operator >> (istream &in, PhanSo &x) {
	in >> x.tu >> x.mau;
	return in;
}
ostream &operator << (ostream &out, PhanSo x) {
	out << x.tu << '/' << x.mau;
	return out;
}
PhanSo PhanSo::operator + (PhanSo other) {
	PhanSo tong(0, 0);
	long long bcnn = this->mau * other.mau / gcd(this->mau, other.mau);
	tong.mau = bcnn;
	tong.tu = this->tu * (bcnn / this->mau) + other.tu * (bcnn / other.mau);
	long long ucln = gcd(tong.tu, tong.mau);
	tong.tu /= ucln;
	tong.mau /= ucln;
	return tong;
}
PhanSo::PhanSo(long long tu, long long mau) {
	this->tu = tu;
	this->mau = mau;
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
