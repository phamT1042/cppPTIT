#include <bits/stdc++.h>
using namespace std;
class GiangVien {
	private:
		string ma, ten, mon;
		static int cnt;
	public:
		string getMon () {
			return mon;
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
		string find;
		getline(cin, find);
		find = chuanHoamon(find);
		cout << "DANH SACH GIANG VIEN BO MON " + find + ":\n";
		for (int i = 0; i < n; i++) {
			if (chuanHoamon(ds[i].getMon()) == find) ds[i].in();
		}
	}
	return 0;
}
