#include <bits/stdc++.h>
using namespace std;
int check = 1, dem = 1;
struct NhanVien  {
	string ma, ten, gt, sinh, diachi, mathue, ngayki;
};
void inds(NhanVien ds[], int N) {
	for (int i = 0; i < N; i++) {
		cout << ds[i].ma << ' ' << ds[i].ten << ' ' << ds[i].gt << ' ' 
        << ds[i].sinh << ' ' << ds[i].diachi << ' ' << ds[i].mathue 
        << ' ' << ds[i].ngayki << endl;
	}
}
void nhap(NhanVien &a) {
	if (check == 1) {
		cin.ignore();
		check = 0;
	}
	if (dem < 10) {
		a.ma = "0000" + to_string(dem);
	} else a.ma = "000" + to_string(dem);
	dem++;
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
    inds(ds,N);
    return 0;
}
