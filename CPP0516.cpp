#include <bits/stdc++.h>
using namespace std;
struct hangHoa {
	int ma;
	string ten, nhomHang;
	float giaMua, giaBan, loiNhuan;
	bool operator < (const hangHoa other) {
		return loiNhuan < other.loiNhuan;
	}
};
void sapxep(hangHoa ds[], int N) {
	sort(ds, ds + N);
}
void nhap(hangHoa ds[], int N) {
	for (int i = 0; i < N; i++) {
		ds[i].ma = i + 1;
		cin.ignore();
		getline(cin, ds[i].ten);
		getline(cin, ds[i].nhomHang);
		cin >> ds[i].giaMua >> ds[i].giaBan;
		ds[i].loiNhuan = ds[i].giaBan - ds[i].giaMua;
	}
}
void in(hangHoa ds[], int N) {
	for (int i = N - 1; i >= 0; i--) {
		cout << ds[i].ma << ' ' << ds[i].ten << ' ' << ds[i].nhomHang 
        << ' ' << fixed << setprecision(2) << ds[i].loiNhuan << endl;
	}
}
using namespace std;
int main() {
	struct hangHoa ds[50];
	int N;
	cin >> N;
	nhap(ds, N);
	sapxep(ds,N);
	in(ds, N);
	return 0;
}

