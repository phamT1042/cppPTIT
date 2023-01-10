#include <bits/stdc++.h>
using namespace std;
class SinhVien  {
	private:
		string ma, ten, lop, email;
	public:
		friend istream &operator >> (istream &in, SinhVien &a);
		friend ostream &operator << (ostream &out, SinhVien a);
		friend void sapxep(SinhVien, int);
		bool operator < (SinhVien a);
};
bool SinhVien::operator < (SinhVien a) {
	if (this->lop != a.lop)
		return this->lop < a.lop;
	return this->ma < a.ma;
}
istream &operator >> (istream &in, SinhVien &a) {
	in >> a.ma;
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.email;
	return in;
}
ostream &operator << (ostream &out, SinhVien a) {
	return out << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' 
    << a.email << endl;
}
void sapxep(SinhVien ds[], int N) {
	sort(ds, ds + N);
}
int main() {
	int N,i;
	cin >> N;
	SinhVien ds[N];
	for(i = 0; i<N; i++) cin >> ds[i];
	sapxep(ds, N);
	for(i=0; i<N; i++) cout << ds[i];
	return 0;
}
