#include <bits/stdc++.h>
using namespace std;
class SinhVien {
	private:
		string ma, ten, lop, ns;
		float gpa;
	public:
		static int count;
		SinhVien() {
			ma = ten = lop = ns = "";
			gpa = 0;
		}
		friend istream &operator >> (istream &in, SinhVien &a);
		friend ostream &operator << (ostream &out, SinhVien a);
};
int SinhVien::count = 0;
istream &operator >> (istream &in, SinhVien &a) {
	if (a.count < 9) a.ma = "B20DCCN00" + to_string(a.count + 1);
	else a.ma = "B20DCCN0" + to_string(a.count + 1);
	a.count++;
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	if (a.ns[2] != '/') a.ns = "0" + a.ns;
	if (a.ns[5] != '/') a.ns.insert(3, "0");
	return in;
}
ostream &operator << (ostream &out, SinhVien a) {
	return out << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' << a.ns 
    << ' ' << fixed << setprecision(2) << a.gpa << endl;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
