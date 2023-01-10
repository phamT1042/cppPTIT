#include<bits/stdc++.h>
using namespace std;
class NhanVien {
	private:
		string ma, ten, gt, ns, dc, mathue, ngayhd;
	public:
		void nhap();
		void xuat();
};
void NhanVien::nhap() {
	this->ma = "00001";
	getline(cin, this->ten);
	cin >> this->gt >> this->ns;
	cin.ignore();
	getline(cin, this->dc);
	cin >> this->mathue >> this->ngayhd;
}
void NhanVien::xuat() {
	cout << this->ma << ' ' << this->ten << ' ' << this->gt << ' ' 
    << this->ns << ' ' << this->dc << ' ' << this->mathue << ' ' << this->ngayhd;
}
int main(){
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
