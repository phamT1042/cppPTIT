#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
	string ma, ten, lop;
	float diem1, diem2, diem3;
	bool operator < (const SinhVien other) {
		return ten < other.ten;
	};
};
void in_ds(SinhVien ds[], int n) {
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ' ' << ds[i].ma << ' ' << ds[i].ten << ' ' << ds[i].lop << ' ' << fixed << setprecision(1) << ds[i].diem1 << ' ' << ds[i].diem2 << ' ' << ds[i].diem3 << endl;
	}
}
void nhap(SinhVien &a) {
	getline(cin, a.ma);
	getline(cin, a.ten);
	getline(cin, a.lop);
	cin >> a.diem1 >> a.diem2 >> a.diem3;
	cin.ignore();
}
int main() {
	int n;
	cin >> n;
	cin.ignore();
	SinhVien ds[n];
	for(int i = 0; i < n; i++) {
		nhap(ds[i]);
	}
	sort(ds, ds + n);
	in_ds(ds, n);
	return 0;
}
