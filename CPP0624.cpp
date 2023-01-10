#include <bits/stdc++.h>
using namespace std;
class SinhVien  {
	private:
		string ma, ten, lop, email;
	public:
		string getma () {
			return ma;
		}
		string getlop () {
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
string up (string x) {
	for (int i = 0; i < x.length(); i++) {
		if (x[i] >= 'a' && x[i] <= 'z') x[i] -= 32;
	}
	return x;
}
int main() {
	int N;
	cin >> N;
	SinhVien ds[N];
	for (int i = 0; i < N; i++) cin >> ds[i];
	int q;
	cin >> q;
	cin.ignore();
	while (q--) {
		string xet;
		getline(cin, xet);
		string check;
		if (xet == "Ke toan") check = "DCKT";
		else if	(xet == "Cong nghe thong tin") check = "DCCN";
		else if	(xet == "An toan thong tin") check = "DCAT";
		else if (xet == "Vien thong") check = "DCVT";
		else if	(xet == "Dien tu") check = "DCDT";
		cout << "DANH SACH SINH VIEN NGANH " + up(xet) + ":\n";
		for(int i = 0; i<N; i++) {
			if (check == "DCCN" || check == "DCAT") {
				if (ds[i].getma().substr(3, 4) == check && ds[i].getlop().substr(0, 1) != "E") cout << ds[i];
			} else if (ds[i].getma().substr(3, 4) == check) cout << ds[i];
		}
	}
	return 0;
}
