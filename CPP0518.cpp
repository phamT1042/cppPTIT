#include <bits/stdc++.h>
using namespace std;
static int ma = 1;
int check = 0;
struct NhanVien  {
	string ma, ten, gt, sinh, diachi, mathue, ngayki;
};
bool cmp (NhanVien a, NhanVien b) {
    string check1 = a.sinh.substr(6, 4) + a.sinh.substr(0, 2) + a.sinh.substr(3, 2);
    string check2 = b.sinh.substr(6, 4) + b.sinh.substr(0, 2) + b.sinh.substr(3, 2);
    return check1 < check2;
}
void sapxep(NhanVien ds[], int N) {
    sort(ds, ds + N, cmp);
}
void inds(NhanVien ds[], int N) {
	for (int i = 0; i < N; i++) {
		cout << ds[i].ma << ' ' << ds[i].ten << ' ' << ds[i].gt << ' ' 
        << ds[i].sinh << ' ' << ds[i].diachi << ' ' << ds[i].mathue << ' ' << ds[i].ngayki << endl;
	}
}
void nhap(NhanVien &a) {
	if (check == 0) {
		cin.ignore();
		check = 1;
	}
	if (ma < 10) a.ma = "0000" + to_string(ma);
	else a.ma = "000" + to_string(ma);
	ma++;
	getline(cin, a.ten);
	getline(cin, a.gt);
	getline(cin, a.sinh);
	getline(cin, a.diachi);
	getline(cin, a.mathue);
	getline(cin, a.ngayki);
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
