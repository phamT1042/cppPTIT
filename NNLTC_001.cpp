#include <bits/stdc++.h>
using namespace std;
int main() {
	int x;
	vector<int> gt;
	map<int, int> dem;
	while (cin >> x) {
		if (dem[x] == 0) gt.push_back(x);
		dem[x]++;
	}
	for (int x : gt) {
		cout << x << ' ' << dem[x] << endl;
	}
	return 0;
}

