#include <bits/stdc++.h>
using namespace std;
class DoanhNghiep {
	private:
		string ma, ten;
		int sv;
	public:
		int getSV () {
			return sv;
		}
		void nhap();
		void in();
		bool operator < (DoanhNghiep other)  {
			if (sv == other.sv) return ma > other.ma;
			return sv < other.sv;
		}
};
void sapxep (DoanhNghiep ds[], int n) {
	sort(ds, ds + n);
}
void DoanhNghiep::nhap() {
	cin >> ma;
	cin.ignore();
	getline(cin, ten);
	cin >> sv;
}
void DoanhNghiep::in() {
	cout << ma << ' ' << ten << ' ' << sv << endl;
}
int main() {
	int n;
	cin >> n;
	DoanhNghiep ds[n];
	for (int i = 0; i < n; i++) {
		ds[i].nhap();
	}
	sapxep(ds, n);
	int q;
	cin >> q;
	while (q--) {
		int a, b;
		cin >> a >> b;
		printf("DANH SACH DOANH NGHIEP NHAN TU %d DEN %d SINH VIEN:\n", a, b);
		for (int i = n - 1; i >= 0; i--) {
			if (ds[i].getSV() >= a && ds[i].getSV() <= b)
				ds[i].in();
		}
	}
	return 0;
}
