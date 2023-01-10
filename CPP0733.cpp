#include <bits/stdc++.h>
using namespace std;
int a[1001][1001];
int n, m, x, y, z, t;
int cnt[1001][1001];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
void search(int i, int j) {
	a[i][j] = 0;
	queue<pair<int,int>> q;
	q.push({i, j});
	while(!q.empty()) {
		pair<int,int> top = q.front();
		q.pop();
		int i = top.first, j = top.second;
		for(int k = 0; k < 4; k++) {
			int i1 = i + dx[k];
			int j1 = j + dy[k];
			if(a[i1][j1] && i1 >= 0 && i1 < n && j1 >= 0 && j1 < m) {
				q.push({i1, j1});
				a[i1][j1] = 0;
				cnt[i1][j1] = cnt[i][j] + 1;
				if(i1 == z && j1 == t) return;
			}
		}
	}
}

int main() {
	int T;
	cin >> T;
	while(T--) {
		cin >> n >> m >> x >> y >> z >> t;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) cin >> a[i][j];
		}
		memset(cnt, sizeof(int), 0);
		if(a[x][y] && a[z][t]) {
			search(x, y);
		}
		if(cnt[z][t] != 0) {
			cout << cnt[z][t] << endl;
		} else cout << "-1\n";
	}
	return 0;
}
