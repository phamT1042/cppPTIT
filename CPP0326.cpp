#include <bits/stdc++.h>
//using namespace std;

std::string tich2SNL(std::string a, std::string b) {
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	std::vector<int> cal(a.length() + b.length());
	for (int i = 0; i < a.length(); i++) {
		for (int j = 0; j < b.length(); j++)
			cal[i + j] = cal[i + j] + (a[i] - '0') * (b[j] - '0');
	}
	std::string res = "";
	for (int i = 0; i < cal.size(); i++) {
		int du = cal[i] % 10;
		int nho = cal[i] / 10;
		if (i + 1 < cal.size()) {
			cal[i + 1] += nho;
		}
		res = std::to_string(du) + res;
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
int main() {
	int t;
	std::cin >> t;
	while (t--) {
		std::string a, b;
		std::cin >> a >> b;
		std::cout << tich2SNL(a, b) << std::endl;
	}
	return 0;
}