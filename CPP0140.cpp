#include<bits/stdc++.h> 
using namespace std; 
int sang[525000] = {0};
void sangNT(){ 
    for (int i = 2; i < 525000; i++) sang[i] = 1;
    for (int i = 2; i < 725; i++) {
        if (sang[i]) {
            for (int j = i * i; j < 525000; j += i)
                sang[j] = 0;
        }
    } 
} 
int main(){ 
    sangNT();
    int t; cin >> t; 
    while(t--){ 
        long long n, check = 0; cin >> n; 
        for (int i = 2; i < 20; i++) {
            long long test1 = pow(2, i) - 1;
            long long test2 = pow(2, i - 1);
            if (sang[i] && sang[test1]) {
                if (test1 * test2 == n) {
                    check = 1;
                    break;
                }
                else if (test1 * test2 > n) break;
            }
        }
        if (check) cout << "1\n";
        else cout << "0\n";
    } 
    return 0; 
}