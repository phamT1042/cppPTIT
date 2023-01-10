#include <bits/stdc++.h>
using namespace std;
struct SinhVien  {
	int stt;
	string ma, ten, lop, email, dn;
	bool operator < (const SinhVien other) {
		return ten < other.ten;
	}
};
void sap_xep(SinhVien ds[], int n) {
	sort(ds, ds + n);
}
void in_ds(SinhVien ds[], int n, string t) {
	for (int i = 0; i < n; i++) {
		if (ds[i].dn == t)
		cout << ds[i].stt << ' ' << ds[i].ma << ' ' << ds[i].ten << ' ' << ds[i].lop << ' ' << ds[i].email << ' ' << ds[i].dn <<  endl;
	}
}
int main() {
	int n;
	cin >> n;
	SinhVien ds[n];
	for(int i = 0; i < n; i++) {
		ds[i].stt = i + 1;
		cin >> ds[i].ma; 
		cin.ignore();
		getline(cin, ds[i].ten);
		cin >> ds[i].lop >> ds[i].email >> ds[i].dn;
	}
	sap_xep(ds, n);
	int q; cin >> q;
	while (q--) {
	string check;
	cin >> check;
	in_ds(ds, n, check);}
	return 0;
}