#include <bits/stdc++.h>
using namespace std;
struct NhanVien  {
	string ma, ten, gt, sinh, diachi, mathue, ngayki;
};
void in(NhanVien  a) {
	cout << a.ma << ' ' << a.ten << ' ' << a.gt << ' ' << 
    a.sinh << ' ' << a.diachi << ' ' << a.mathue << ' ' << a.ngayki;
}
void nhap(NhanVien  &a) {
	a.ma = "00001";
	getline(cin, a.ten);
	getline(cin, a.gt);
	getline(cin, a.sinh);
	getline(cin, a.diachi);
	getline(cin, a.mathue);
	getline(cin, a.ngayki);
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}