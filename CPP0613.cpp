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
		friend string chuanHoten(string);
		friend ostream &operator << (ostream &out, SinhVien a);
		bool operator < (SinhVien a);
};
int SinhVien::count = 0;
bool SinhVien::operator < (SinhVien a) {
	return this->gpa < a.gpa;
}
string chuanHoten(string x) {
	string res = "";
	vector<string> tach;
	stringstream ss(x);
	string tmp;
	while (ss >> tmp) tach.push_back(tmp);
	for (int i = 0; i < tach.size(); i++) {
		if (tach[i][0] >= 'a' && tach[i][0] <= 'z') tach[i][0] -= 32;
		for (int j = 1; j < tach[i].length(); j++) {
			if (tach[i][j] >= 'A' && tach[i][j] <= 'Z') tach[i][j] += 32;
		}
		res += tach[i] + " ";
	}
	return res;
}
istream &operator >> (istream &in, SinhVien &a) {
	if (a.count < 9) a.ma = "B20DCCN00" + to_string(a.count + 1);
	else a.ma = "B20DCCN0" + to_string(a.count + 1);
	a.count++;
	scanf("\n");
	getline(in, a.ten);
	a.ten = chuanHoten(a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	if (a.ns[2] != '/') a.ns = "0" + a.ns;
	if (a.ns[5] != '/') a.ns.insert(3, "0");
	return in;
}
ostream &operator << (ostream &out, SinhVien a) {
	out << a.ma << ' ' << a.ten << a.lop << ' ' << a.ns << ' ' << fixed << setprecision(2) << a.gpa << endl;
	return out;
}
void sapxep(SinhVien ds[], int N) {
	sort(ds, ds + N);
	reverse(ds, ds + N);
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
