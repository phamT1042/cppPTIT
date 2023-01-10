#include <bits/stdc++.h>
using namespace std;
int check = 1;
class NhanVien  {
	private:
		string ma, ten, gt, sinh, diachi, mathue, ngayki;
	public:
		static int count;
		friend istream &operator >> (istream &in, NhanVien &a);
		friend ostream &operator << (ostream &out, NhanVien a);
};
int NhanVien::count = 1;
istream &operator >> (istream &in, NhanVien &a) {
	if (check == 1) {
		cin.ignore();
		check = 0;
	}
	if (a.count < 10) {
		a.ma = "0000" + to_string(a.count);
	} else a.ma = "000" + to_string(a.count);
	a.count++;
	getline(in, a.ten);
	getline(in, a.gt);
	getline(in, a.sinh);
	getline(in, a.diachi);
	getline(in, a.mathue);
	getline(in, a.ngayki);
	return in;
}
ostream &operator << (ostream &out, NhanVien a) {
	return out << a.ma << ' ' << a.ten << ' ' << a.gt << ' ' << a.sinh << ' ' 
    << a.diachi << ' ' << a.mathue << ' ' << a.ngayki << endl;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
