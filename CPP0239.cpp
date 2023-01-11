#include <bits/stdc++.h>
using namespace std;
//Program for Rank of Matrix
int a[16][16];
void swap(int row1, int row2, int col) {
    for (int i = 0; i < col; i++) {
        swap(a[row1][i], a[row2][i]);
    }
}
int rankOfMatrix(int n, int m) {
    int rank = m;  //Biến đổi sơ cấp tìm hạng ma trận theo số cột
    for (int row = 0; row < rank; row++) {
        if (a[row][row]) {                      //Biến đổi về ma trận bậc thang
                                                //Nếu giá trị a[r][r] tại đây không bằng 0, đưa tất cả giá trị trên cột r này ngoại trừ a[r][r] về 0
                                                //bằng biến đổi sơ cấp
            for (int i = 0; i < n; i++) {
                if (i != row) {
                    double chia = (double) a[i][row] / a[row][row];
                    for (int j = 0; j < rank; j++)
                        a[i][j] -= chia * a[row][j];
                }
           }
        }
        else {                                  //Nếu giá trị a[r][r] = 0, ta có 2 TH              
            bool reduce = true;
            for (int i = row + 1; i < n;  i++) {//TH1: Xét trên cột r xem có giá trị nào khác 0 không
                                                //nếu có, đổi hàng của giá trị đó với hàng chứa giá trị
                                                //a[r][r] sau đó xét lại hàng này (row--).
                if (a[i][row]) {
                    swap(row, i, rank);
                    reduce = false;
                    break;
                }
            }
            if (reduce) {                       //TH2: Nếu tất cả giá trị trên cột r đều là 0, xoá cột này
                                                //bằng cách đưa nó xuống cuối ma trận và giảm số lượng cột phải xét đi 1
                                                //(hay rank đi 1)
                rank--;
                for (int i = 0; i < n; i++)
                    a[i][row] = a[i][rank];
            }
            row--;
        }
    }
    return rank;
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) 
                cin >> a[i][j];
        }
        cout << rankOfMatrix(n, m) << endl;
    }
    return 0;
}