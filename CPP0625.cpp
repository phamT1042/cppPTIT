#include <bits/stdc++.h>
using namespace std;
string getTen (string ten) {
	string res, cmp;
	stringstream ss(ten);
	while (ss >> cmp) res = cmp;
	return res;
}
class GiangVien {
	private:
		string ma, ten, mon;
		static int cnt;
	public:
		string getMa() {
			return ma;
		}
		string getten() {
			return ten;
		}
		void nhap();
		void in();
		friend bool operator < (GiangVien a, GiangVien b) {
			if (getTen(a.getten()) != getTen(b.getten())) return getTen(a.getten()) < getTen(b.getten());
			else return a.getMa() < b.getMa();
		}
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
	sort(ds, ds + n);
	for (int i = 0; i < n; i++) {
		ds[i].in();
	}
	return 0;
}
