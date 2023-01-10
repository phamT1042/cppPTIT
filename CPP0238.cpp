#include <bits/stdc++.h>
using namespace std;
int dx[4] = {0, -1, 1, 0};
int dy[4] = {-1, 0, 0, 1};
char a[21][21];
int n, m;
void dfs(int i, int j) {
	a[i][j] = 'Y';
	for (int k = 0; k < 4; k++) {
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 0 && j1 >= 0 && i1 < n && j1 < m && a[i1][j1] == 'O') dfs(i1, j1);
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) cin >> a[i][j];
		}
		for (int j = 0; j < m; j++) {
			if (a[0][j] == 'O') dfs(0, j);
		}
		for (int j = 0; j < m; j++) {
			if (a[n - 1][j] == 'O') dfs(n - 1, j);
		}
		for (int i = 0; i < n; i++) {
			if (a[i][0] == 'O') dfs(i, 0);
		}
		for (int i = 0; i < n; i++) {
			if (a[i][m - 1] == 'O') dfs(i, m - 1);
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] != 'Y') cout << "X ";
				else cout << "O ";
			}
			cout << endl;
		}
	}
	return 0;
}
