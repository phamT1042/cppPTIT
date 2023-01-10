#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
	string maSV, ten, lop, ngaySinh;
	float gpa;
};
void check(SinhVien &a) {
	if (a.ngaySinh[2] != '/') a.ngaySinh = '0' + a.ngaySinh;
	if (a.ngaySinh[5] != '/') a.ngaySinh.insert(3, "0");
}
void inThongTinSV(SinhVien a) {
	check(a);
	cout << a.maSV << ' ' << a.ten << ' ' << a.lop << ' ' << a.ngaySinh 
    << ' ' << fixed << setprecision(2) << a.gpa;
}
void nhapThongTinSV(SinhVien &a) {
	a.maSV = "N20DCCN001";
	getline(cin, a.ten);
	cin >> a.lop >> a.ngaySinh >> a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
