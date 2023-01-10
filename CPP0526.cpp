#include <bits/stdc++.h>
using namespace std;
struct nguoi {
	string ten, sinh;
};
bool cmp (nguoi a, nguoi b) {
	string check1 = a.sinh.substr(6, 4) + a.sinh.substr(3, 2) + a.sinh.substr(0, 2);
	string check2 = b.sinh.substr(6, 4) + b.sinh.substr(3, 2) + b.sinh.substr(0, 2);
    return check1 < check2;
}
void sapxep(nguoi ds[], int N) {
	sort(ds, ds + N, cmp);
}
void in(nguoi ds[], int N) {
	cout << ds[N - 1].ten << endl;
	cout << ds[0].ten;
}
int main() {
	struct nguoi ds[100];
	int N, i;
	cin >> N;
	for(i = 0; i < N; i++) {
		cin >> ds[i].ten >> ds[i].sinh;
	}
	sapxep(ds, N);
	in(ds, N);
	return 0;
}
