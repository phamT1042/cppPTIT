#include <bits/stdc++.h>
using namespace std;
class SinhVien {
	private:
		string ma, ten, lop, ngaySinh;
		float GPA;
	public:
		void nhap();
		void check();
		void xuat();
};
void SinhVien::check() {
	if (this->ngaySinh[2] != '/') this->ngaySinh = "0" + this->ngaySinh;
	if (this->ngaySinh[5] != '/') this->ngaySinh.insert(3, "0");
}
void SinhVien::nhap() {
	this->ma = "B20DCCN001";
	getline(cin, this->ten);
	cin >> this->lop;
	cin >> this->ngaySinh;
	cin >> this->GPA;
}
void SinhVien::xuat() {
	check();
	cout << this->ma << ' ' << this->ten << ' ' << this->lop << ' ' 
    << this->ngaySinh << ' ' << fixed << setprecision(2) << this->GPA;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
