#include <bits/stdc++.h> 
using namespace std; 
int n;
map<int, int> ts;
void Try () {
    for (int i = n + 2; i <= 2 * n; i++) {
        int test = i;
        for (int j = 2; j <= test; j++) {
            while (test % j == 0) {
                ts[j]++;
                test /= j;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        int test = i;
        for (int j = 2; j <= test; j++) {
            while (test % j == 0) {
                ts[j]--;
                test /= j;
            }
        }
    }
}
string nhan (string a, string b) {
    reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	vector<int> cal(a.length() + b.length());
	for (int i = 0; i < a.length(); i++) {
		for (int j = 0; j < b.length(); j++)
			cal[i + j] = cal[i + j] + (a[i] - '0') * (b[j] - '0');
	}
	string res = "";
	for (int i = 0; i < cal.size(); i++) {
		int du = cal[i] % 10;
		int nho = cal[i] / 10;
		if (i + 1 < cal.size()) {
			cal[i + 1] += nho;
		}
		res = to_string(du) + res;
	}
	int i = 0;
	while (i < res.length()) {
		if (res[i] != '0') break;
		else {
			res.erase(0, 1);
		}
	}
	if (res.length() == 0) return "0";
	return res;
}
void solve() {
    string result = "1";
    for (auto it : ts) {
        if (it.second == 0) continue;
        while (it.second > 0) {
            result = nhan(result, to_string(it.first));
            it.second--;
        }
    }
    cout << result;
}
int main() { 
    cin >> n;
    n++;
    Try();
    solve(); 
}