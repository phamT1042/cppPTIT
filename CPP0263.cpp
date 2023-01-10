#include <bits/stdc++.h>
using namespace std;
//auxiliary diagonal matrix + main diagonal matrix + prefixsum
int a[401][401] = {0}, mainMatrix[401][401] = {0}, auxiliaryMatrix[401][401] = {0} ;
int main() {
	int n;	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			mainMatrix[i][j] = mainMatrix[i - 1][j - 1] + a[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >= 1; j--) {
			if (i == 1 || j == n)
				auxiliaryMatrix[i][j] = a[i][j];
			else
				auxiliaryMatrix[i][j] = auxiliaryMatrix[i - 1][j + 1] + a[i][j];
		}
	}
	int res = INT_MIN;
	for (int i = n; i >= 1; i--) {
		for (int j = n; j >= 1; j--) {
			int tmp = min(i, j); //So ma tran vuong con co the tao
									//voi diem cuoi ben phai la a[i][j]
			int firstColumn = j - tmp, firstRow = i - tmp;
			for (int k = 0; k <= tmp; k++) {
				res = max (res, mainMatrix[i][j] - mainMatrix[firstRow + k][firstColumn + k] - (auxiliaryMatrix[i][firstColumn + k + 1] - auxiliaryMatrix[firstRow + k][j + 1]));
			}
		}
	}
	cout << res;
	return 0;
}

