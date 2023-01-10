#include<bits/stdc++.h>
using namespace std;
class SinhVien {
	private:
		string ma, ten, lop, ngay;
		float gpa;
	public:
		SinhVien();
		friend istream &operator >> (istream &in, SinhVien &a);
		friend ostream &operator << (ostream &out, SinhVien a) {
			return out << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' 
            << a.ngay << ' ' << fixed << setprecision(2) << a.gpa;
		}
};
SinhVien::SinhVien() {
	ma = ten = lop = ngay = "";
	gpa = 0;
}
istream &operator >> (istream &in, SinhVien &a) {
	a.ma = "B20DCCN001";
	getline(in, a.ten);
	if (a.ten[0] >= 'a' && a.ten[0] <= 'z') a.ten[0] -= 32;
	for (int i = 1; i < a.ten.length(); i++) {
		if (a.ten[i - 1] == ' ') {
			if(a.ten[i] >= 'a' && a.ten[i] <= 'z')
				a.ten[i] -= 32;
		} else if (a.ten[i] >= 'A' && a.ten[i] <= 'Z') a.ten[i] += 32;
	}
	in >> a.lop >> a.ngay >> a.gpa;
	if (a.ngay[2] != '/') a.ngay = "0" + a.ngay;
	if (a.ngay[5] != '/') a.ngay.insert(3, "0");
	return in;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
