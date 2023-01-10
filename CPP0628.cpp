#include <bits/stdc++.h>
using namespace std;
class DoanhNghiep {
	private:
		string ma, ten;
		int sv;
	public:
		string getTen () {
			return ten;
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
	for (int i = n - 1; i >= 0; i--) {
		ds[i].in();
	}
	return 0;
}