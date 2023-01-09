#include <bits/stdc++.h>
using namespace std;
char ma1[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
char ma2[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
int main() {
	int t;
	cin >> t;
	while (t--) {
		int b; cin >> b;
		char bl[15];
		for (char &x : bl) cin >> x;
		int cau = 0;
		if (b == 101) {
			for (int i = 0; i < 15; i++) {
				if (bl[i] == ma1[i]) cau += 1;
			}
		}
		else {
			for (int i = 0; i < 15; i++) {
				if (bl[i] == ma2[i]) cau += 1;
			}
		}
		double diem = ((cau * 1.0f) / 15) * 10;
		printf("%.2lf\n", diem);
	}
	return 0;
}


