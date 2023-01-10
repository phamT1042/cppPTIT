#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd (b, a % b);
}
class PhanSo {
	private:
		long long tu, mau;
	public:
		PhanSo(long long, long long);
		friend istream &operator >> (istream &in, PhanSo &p);
		friend ostream &operator << (ostream &out, PhanSo p);
		void rutgon() {
			long long ucln = gcd(this->tu, this->mau);
			this->tu /= ucln;
			this->mau /= ucln;
		}
};
istream &operator >> (istream &in, PhanSo &p) {
	in >> p.tu >> p.mau;
	return in;
}
ostream &operator << (ostream &out, PhanSo p) {
	out << p.tu << '/' << p.mau;
	return out;
}
PhanSo::PhanSo(long long tu, long long mau) {
	this->tu = tu;
	this->mau = mau;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}