#include <bits/stdc++.h>
using namespace std;
struct SinhVien {
	string ma, ten, lop, ns;
	float gpa;
};
string chuanHoTen(string x) {
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
void nhap(SinhVien ds[], int N) {
	for (int i = 0; i < N; i++) {
		if (i < 9) ds[i].ma = "B20DCCN00" + to_string(i + 1);
		else ds[i].ma = "B20DCCN0" + to_string(i + 1);
		cin.ignore();
		getline(cin, ds[i].ten);
		ds[i].ten = chuanHoTen(ds[i].ten);
		cin >> ds[i].lop >> ds[i].ns >> ds[i].gpa;
		if (ds[i].ns[2] != '/') ds[i].ns = "0" + ds[i].ns;
		if (ds[i].ns[5] != '/') ds[i].ns.insert(3, "0");
	}
}
void in(SinhVien ds[], int N) {
	for (int i = 0; i < N; i++) {
		cout << ds[i].ma << ' ' << ds[i].ten << ds[i].lop << ' ' 
        << ds[i].ns << ' ' << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}
using namespace std;
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}

