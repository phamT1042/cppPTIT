#include <bits/stdc++.h>
using namespace std;
class GiangVien {
	private:
		string ma, ten, mon;
		static int cnt;
	public:
		string getTen () {
			return ten;
		}
		void nhap();
		void in();
};
int GiangVien::cnt = 1;
string chuanHoamon (string x) {
	stringstream ss(x);
	string tmp;
	string res = "";
	while (ss >> tmp) res += toupper(tmp[0]);
	return res;
}
void GiangVien::nhap() {
	if (cnt < 10) ma = "GV0" + to_string(cnt);
	else ma = "GV" + to_string(cnt);
	cnt++;
	getline(cin, ten);
	getline(cin, mon);
}
void GiangVien::in() {
	cout << ma << ' ' << ten << ' ' << chuanHoamon(mon) << endl;
}
int main() {
	int n;
	cin >> n;
	GiangVien ds[n];
	cin.ignore();
	for (int i = 0; i < n; i++) {
		ds[i].nhap();
	}
	int q;
	cin >> q;
	cin.ignore();
	while (q--) {
		string check;
		getline(cin, check);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " + check + ":\n";
		for (int i = 0; i < check.length(); i++) {
			check[i] = tolower(check[i]);
		}

		for (int i = 0; i < n; i++) {
			string tenThuong = "";
			for (int j = 0; j < ds[i].getTen().length(); j++) {
				tenThuong += tolower(ds[i].getTen()[j]);
			}
			if (tenThuong.find(check) != string::npos) ds[i].in();
		}
	}
	return 0;
}
