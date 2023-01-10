#include<bits/stdc++.h>
using namespace std;
struct ThiSinh {
	string name, date;
	float d1, d2, d3;
};
void nhap (ThiSinh &x) {
	getline(cin, x.name);
    getline(cin, x.date);
	cin >> x.d1 >> x.d2 >> x.d3;
}
void in(ThiSinh &x) {
	cout << x.name << " " << x.date << " " << fixed 
    << setprecision(1) << (x.d1 + x.d2 + x.d3) << endl;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
