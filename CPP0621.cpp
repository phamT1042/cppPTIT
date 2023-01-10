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
	out << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' << a.email << endl;
	return out;
}
void sapxep(SinhVien ds[], int N) {
	sort(ds, ds + N);
}
int main() {
	SinhVien ds[1001];
	int N = 0;
	while (cin >> ds[N]) N++;
	sapxep(ds, N);
	for(int i=0; i<N; i++) cout << ds[i];
	return 0;
}