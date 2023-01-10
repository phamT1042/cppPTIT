#include <bits/stdc++.h>
using namespace std;
class SinhVien  {
	private:
		string ma, ten, lop, email;
	public:
		string getlop (){
			return lop;
		}
		friend istream &operator >> (istream &in, SinhVien &a);
		friend ostream &operator << (ostream &out, SinhVien a);
};
istream &operator >> (istream &in, SinhVien &a) {
	in >> a.ma;
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.email;
	return in;
}
ostream &operator << (ostream &out, SinhVien a) {
	out << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' << a.email << endl;
	return out;
}
int main() {
	int N;
	cin >> N;
	SinhVien ds[N];
	for (int i = 0; i < N; i++) cin >> ds[i];
	int q;
	cin >> q;
	while (q--) {
		string find;
		cin >> find;
		cout << "DANH SACH SINH VIEN KHOA " + find + ":\n";
		for(int i = 0; i<N; i++) {
			if (ds[i].getlop().substr(1, 2) == find.substr(2, 2)) cout << ds[i];
		}
	}
	return 0;
}
