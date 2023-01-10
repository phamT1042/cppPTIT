#include <bits/stdc++.h>
using namespace std;
struct SinhVien  {
	string ma, ten, lop;
	float diem1, diem2, diem3;
	bool operator < (const SinhVien other) {
		return ma < other.ma;
	}
};
void sap_xep(SinhVien ds[], int n) {
	sort(ds, ds + n);
}
void in_ds(SinhVien ds[], int n) {
	for (int i = 0; i < n; i++) {
		cout << i + 1 << ' ' << ds[i].ma << ' ' << ds[i].ten << ' ' 
        << ds[i].lop << ' ' << fixed << setprecision(1) << ds[i].diem1 
        << ' ' << ds[i].diem2 << ' ' << ds[i].diem3 << endl;
	}
}
void nhap(SinhVien &a) {
	cin >> a.ma;
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.lop >> a.diem1 >> a.diem2 >> a.diem3;
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
