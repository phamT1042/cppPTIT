#include<bits/stdc++.h>
using namespace std;
//CT tinh S da giac loi N dinh:  
//(1/2) * [(x1 * y2 + x2 * y3 +...+ xn-1 * yn + xn * y1) - (y1 * x2 + y2 * x3 + ... + yn-1 * xn + yn * x1)]
struct Point {
	int x, y;
	friend istream &operator >> (istream &in, Point &a) {
		return in >> a.x >> a.y;
	}
};
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		Point ds[n];
		for (Point &x : ds) cin >> x;
		int sum = 0;
		for (int i = 0; i < n - 1; i++) {
			sum += ds[i].x * ds[i + 1].y - ds[i].y * ds[i + 1].x;
		}
		sum += ds[n - 1].x * ds[0].y - ds[n - 1].y * ds[0].x;
		cout << fixed << setprecision(3) << (1.0f * abs(sum)) / 2 << endl;
	}
	return 0;
}
